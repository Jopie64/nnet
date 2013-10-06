#include "nnmain.h"
#include "ui_nnmain.h"

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
