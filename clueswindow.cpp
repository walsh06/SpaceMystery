#include "clueswindow.h"
#include "ui_clueswindow.h"

CluesWindow::CluesWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CluesWindow)
{
    ui->setupUi(this);
}

CluesWindow::~CluesWindow()
{
    delete ui;
}
