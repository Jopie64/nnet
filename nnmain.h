#ifndef NNMAIN_H
#define NNMAIN_H

#include <QMainWindow>
#include <memory>

namespace Ui {
class NNMain;
}

class StringList;
class NNet;


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

    std::shared_ptr<StringList> output;
    std::shared_ptr<NNet> nnet;
};

#endif // NNMAIN_H
