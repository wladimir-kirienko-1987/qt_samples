#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item_1 = new QListWidgetItem(QIcon(":/rec/img/exit.png"), "Audi");
    ui->listWidget->addItem(item_1);
    QListWidgetItem *item_2 = new QListWidgetItem(QIcon(":/rec/img/new.png"), "BMW");
    ui->listWidget->addItem(item_2);
    QListWidgetItem *item_3 = new QListWidgetItem(QIcon(":/rec/img/open.png"), "Volvo");
    ui->listWidget->addItem(item_3);
    ui->listWidget->addItem("Ford");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_triggered()
{
    ui->statusBar->showMessage("Создание нового проекта");
}

void MainWindow::on_action_2_triggered()
{
    ui->statusBar->showMessage("Открытие нового проекта");
}

void MainWindow::on_action_3_triggered()
{
    QApplication::quit();
}

void MainWindow::on_pushButton_clicked()
{
    ui->statusBar->showMessage(ui->listWidget->currentItem()->text());
    ui->listWidget->currentItem()->setBackgroundColor(Qt::blue);
    ui->listWidget->currentItem()->setForeground(Qt::white);

}
