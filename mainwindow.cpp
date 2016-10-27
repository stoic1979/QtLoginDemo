#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    http = new HttpClient("http://weavebytes.com/development/logindemo/api.php", this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LoginButton_clicked()
{
    qDebug() << " Login Pressed...";
    qDebug() << ui->teUsername->toPlainText();
    qDebug() << ui->tePassword->toPlainText();


    QMap<QString, QString> params;
    params["op"] = QString("login");
    params["username"] = ui->teUsername->toPlainText();
    params["password"] = ui->tePassword->toPlainText();


    //http->TestGetRequest();
    http->SendPostRequest(params);

}
