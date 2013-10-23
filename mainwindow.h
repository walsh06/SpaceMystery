#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    void updateOxygen();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_19_clicked();

    void on_chefButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

    void on_pushButton_5_clicked();

private:
    Ui::MainWindow *ui;
};



#endif // MAINWINDOW_H
