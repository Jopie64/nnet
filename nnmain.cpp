#include "nnmain.h"
#include "ui_nnmain.h"
#include <iostream>
#include "QStringListModel"
#include "nnet.h"

using namespace std;

class StringList : public QStringListModel
{
public:
  void append (const QString& string){
    insertRows(rowCount(), 1);
    setData(index(rowCount()-1), string);
  }
  StringList& operator<<(const QString& string){
    append(string);
    return *this;
  }
};

NNMain::NNMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NNMain),
    output(new StringList()),
    nnet(new NNet(1000,3))
{
    ui->setupUi(this);
    ui->listOutput->setModel(output.get());
}

NNMain::~NNMain()
{
    delete ui;
}

void NNMain::on_Test_clicked()
{
    out("Test knopje");
}

void NNMain::out(const QString &str)
{
    output->append(str);
    ui->listOutput->scrollToBottom();
    wcout << str.toStdWString() << endl;
}
