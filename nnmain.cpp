#include "nnmain.h"
#include "ui_nnmain.h"
#include <iostream>

using namespace std;

NNMain::NNMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NNMain)
{
    ui->setupUi(this);
}

NNMain::~NNMain()
{
    delete ui;
}

void NNMain::on_Test_clicked()
{
    cout << "Test" << endl;
}
