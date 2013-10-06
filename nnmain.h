#ifndef NNMAIN_H
#define NNMAIN_H

#include <QMainWindow>

namespace Ui {
class NNMain;
}

class NNMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit NNMain(QWidget *parent = 0);
    ~NNMain();

private slots:
    void on_Test_clicked();

private:
    Ui::NNMain *ui;
};

#endif // NNMAIN_H
