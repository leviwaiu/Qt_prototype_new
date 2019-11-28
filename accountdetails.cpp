#include "accountdetails.h"
#include "ui_accountdetails.h"

#include <QLineEdit>

accountDetails::accountDetails(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::accountDetails)
{
    ui->setupUi(this);
    ui->accountList->insertItem(0,"IBM Technologies");
    ui->accountList->insertItem(1,"Microsoft Azure");
    ui->passwordField->setEchoMode(QLineEdit::Password);
}

accountDetails::~accountDetails()
{
    delete ui;
}

void accountDetails::on_applyButton_clicked()
{
    this->close();
}

void accountDetails::on_discardButton_clicked()
{
    this->close();
}
