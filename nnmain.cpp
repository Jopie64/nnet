#include "nnmain.h"
#include "ui_nnmain.h"
#include <iostream>
#include "QStringListModel"

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
    output(new StringList())
{
    ui->setupUi(this);
    ui->listOutput->setModel(output);
}

NNMain::~NNMain()
{
    delete ui;
    delete output;
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
