#ifndef PROTOTYPEMAIN_H
#define PROTOTYPEMAIN_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class PrototypeMain; }
QT_END_NAMESPACE

class PrototypeMain : public QWidget
{
    Q_OBJECT

public:
    PrototypeMain(QWidget *parent = nullptr);
    ~PrototypeMain();

private slots:
    void on_uploadButton_clicked();

    void on_analyseButton_clicked();

    void on_backbutton_clicked();

    void on_backbutton_result_clicked();

    void on_continueButton_clicked();

    void on_accountSettingButton_clicked();

private:
    Ui::PrototypeMain *ui;
};
#endif // PROTOTYPEMAIN_H
