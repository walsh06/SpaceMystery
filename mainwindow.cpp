#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include "clueswindow.h"
//#include "ui_clueswindow.h"
#include "conversationhelper.h"
using namespace std;
#include <QTimer>
#include <iostream>
#include <string>

int oxygenLeft = 100;
ConversationHelper ch;
 //QDialog *dialog = new QDialog();
MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent),ui(new Ui::MainWindow)
{


    ui->setupUi(this);

    ui->spinBox->setRange(0,100);
    ui->spinBox->setValue(oxygenLeft);

    ui->verticalSlider->setRange(0,100);
    ui->verticalSlider->setValue(oxygenLeft);

    QObject::connect(ui->spinBox, SIGNAL(valueChanged(int)),
                     ui->verticalSlider, SLOT(setValue(int)));

   updateOxygen();

  // QDialog *dialog = new QDialog();



}


void MainWindow::updateOxygen()
{
    oxygenLeft--;
    ui->spinBox->setValue(oxygenLeft);
    QTimer::singleShot(600, this, SLOT(updateOxygen()));
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{
    //dialog->show();
}

void MainWindow::on_pushButton_19_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_chefButton_clicked()
{
    /*
    string line;
    ifstream myfile2 ("Conversations/Chef/Greeting.txt");
    if (myfile2.is_open())
    {
      while ( getline (myfile2,line) )
      {
          ui->label->setText(QString::fromStdString(line));
      }
      myfile2.close();
    }

    else cout << "Unable to open file \n";
    */

    //ui->comboBox->addItem("Hello");
    //ui->comboBox->addItem("Hi");

    // ConversationHelper();
    std::vector<string> qs = ch.getQuestions("Chef", 10);

     for(int i = 0; i < qs.size() ; i++)
     {
         ui->comboBox->addItem(QString::fromStdString(qs[i]));
     }
   // ui->label->setText(QString::fromStdString(ch.getQuestions("Chef", 10)));

}

void MainWindow::on_comboBox_currentIndexChanged(int index)
{
    ui->label->setText(QString::fromStdString(ch.getMessage("Chef", 0, index)));
}
