#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    if (ui->checkBox->isChecked()) {
//        ui->statusBar->showMessage("Галочка поставлена");
//    } else {
//        ui->statusBar->showMessage("Галочка не поставлена");
//    }

    if (ui->radioButton->isChecked()) {
        ui->statusBar->showMessage("Выбран Марк");
    }
    if (ui->radioButton_2->isChecked()) {
        ui->statusBar->showMessage("Выбран Джон");
    }

}

void MainWindow::on_checkBox_stateChanged(int arg1)
{
    if (ui->checkBox->isChecked()) {
        ui->statusBar->showMessage("Галочка поставлена");
    } else {
        ui->statusBar->showMessage("Галочка не поставлена");
    }
}
