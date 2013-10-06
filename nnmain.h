#ifndef NNMAIN_H
#define NNMAIN_H

#include <QMainWindow>

namespace Ui {
class NNMain;
}

class StringList;

class NNMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit NNMain(QWidget *parent = 0);
    ~NNMain();

    void out(const QString& str);

private slots:
    void on_Test_clicked();

private:
    Ui::NNMain *ui;

    StringList* output;
};

#endif // NNMAIN_H
