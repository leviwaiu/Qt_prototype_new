#include "prototypemain.h"
#include "ui_prototypemain.h"
#include "accountdetails.h"

#include <QFileDialog>
#include <QDir>
#include <chrono>

PrototypeMain::PrototypeMain(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PrototypeMain)
{
    ui->setupUi(this);
}


PrototypeMain::~PrototypeMain()
{
    delete ui;
}

void PrototypeMain::on_uploadButton_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Open Text file:"), "", "");
}

void PrototypeMain::on_analyseButton_clicked()
{
   ui->continueButton->setVisible(false);
   ui->loadingLabel_2->setVisible(false);
   ui->loadingLabel_3->setVisible(false);
   ui->loadingLabel_4->setVisible(false);
   ui->stackedWidget->setCurrentIndex(1);
   int value = 0;
   for(long int i = 0; i <= 1000000000; i++){
       value = i / 10000000;
       if(value > 10){
           ui->loadingLabel_2->setVisible(true);
       }
       if(value > 30){
           ui->loadingLabel_3->setVisible(true);
       }
       if(value > 80){
           ui->loadingLabel_4->setVisible(true);
       }
       ui->analyseProgress->setValue(value);
   }
   ui->continueButton->setVisible(true);
}

void PrototypeMain::on_backbutton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void PrototypeMain::on_backbutton_result_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void PrototypeMain::on_continueButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void PrototypeMain::on_accountSettingButton_clicked()
{
    accountDetails* accountScreen = new accountDetails();
    accountScreen->show();
}
