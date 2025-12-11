#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <vector>
#include <string>
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

struct itemPrice
{
    std::string itemName;
    int itemPrice;
};

//

std::vector<itemPrice> v;
int total = 0;
MainWindow::~MainWindow()
{
    delete ui;
}

// botones de navegacion

void MainWindow::on_boton_vercarrito_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);


    std::string str;

    for (int i = 0;i< v.size();i++)
    {
        str= v[i].itemName +"\t\t" + std::to_string(v[i].itemPrice);
        ui->itemsinCartList->addItem(str.c_str());
        total +=v[i].itemPrice;
    }
    str= std::to_string(total);
    ui->totalcarrito->setText(str.c_str());
}


void MainWindow::on_boton_volver_clicked()

{
    ui->stackedWidget->setCurrentIndex(0);
}


void MainWindow::on_boton_pagar_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_boton_confirmar_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void MainWindow::on_boton_next_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


// agrgar al carrito

void MainWindow::on_add_orejas_clicked()
{
    itemPrice ip;
    ip.itemName = "orejas";
    ip.itemPrice = 30000;

    v.push_back(ip);
}


void MainWindow::on_add_corazon_clicked()
{
    itemPrice ip;
    ip.itemName = "corazon";
    ip.itemPrice = 85000;

    v.push_back(ip);
}

