#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "clueswindow.h"
#include "ui_clueswindow.h"
#include <QTimer>
#include <iostream>
#include <string>

int oxygenLeft = 100;
 QDialog *dialog = new QDialog();
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
   dialog->setLayout(new Ui::CluesWindow);


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
    dialog->show();
}
