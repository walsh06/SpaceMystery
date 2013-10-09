#ifndef CLUESWINDOW_H
#define CLUESWINDOW_H

#include <QDialog>

namespace Ui {
class CluesWindow;
}

class CluesWindow : public QDialog
{
    Q_OBJECT

public:
    explicit CluesWindow(QWidget *parent = 0);
    ~CluesWindow();

private:
    Ui::CluesWindow *ui;
};

#endif // CLUESWINDOW_H
