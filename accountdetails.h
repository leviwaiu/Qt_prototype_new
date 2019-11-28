#ifndef ACCOUNTDETAILS_H
#define ACCOUNTDETAILS_H

#include <QWidget>

namespace Ui {
class accountDetails;
}

class accountDetails : public QWidget
{
    Q_OBJECT

public:
    explicit accountDetails(QWidget *parent = nullptr);
    ~accountDetails();

private slots:
    void on_applyButton_clicked();

    void on_discardButton_clicked();

private:
    Ui::accountDetails *ui;
};

#endif // ACCOUNTDETAILS_H
