#include "prototypemain.h"
#include "ui_prototypemain.h"
#include "accountdetails.h"

#include <QFileDialog>
#include <QDir>

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
   ui->continueButton->setVisible(true);
}

void PrototypeMain::trigger_label(int number){
    if(number == 2){
        ui->loadingLabel_2->setVisible(true);
    }
    else if(number == 3){
        ui->loadingLabel_3->setVisible(true);
    }
    else if(number == 4){
        ui->loadingLabel_4->setVisible(true);
    }
}

void PrototypeMain::analyseProgress(int number){
    ui->analyseProgress->setValue(number);
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

