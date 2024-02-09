#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    system("netsh advfirewall firewall set rule name=\"Steamdisabler\" new enable=yes");
    system("netsh advfirewall firewall set rule name=\"Steamhelper1\" new enable=yes");
    system("netsh advfirewall firewall set rule name=\"Steamhelper2\" new enable=yes");
}




void MainWindow::on_pushButton_clicked()
{
    system("netsh advfirewall firewall set rule name=\"Steamdisabler\" new enable=no");
    system("netsh advfirewall firewall set rule name=\"Steamhelper1\" new enable=no");
    system("netsh advfirewall firewall set rule name=\"Steamhelper2\" new enable=no");
}


void MainWindow::on_pushButton_3_clicked()
{
    system("netsh advfirewall firewall delete rule name=\"Steamdisabler\" ");
    system("netsh advfirewall firewall delete rule name=\"Steamhelper1\" ");
    system("netsh advfirewall firewall delete rule name=\"Steamhelper2\" ");

    system("netsh advfirewall firewall add rule name=\"Steamdisabler\" dir=out program=\"C:\\Program Files (x86)\\Steam\\steam.exe\" action=block");
    system("netsh advfirewall firewall add rule name=\"Steamhelper1\" dir=out program=\"C:\\Program Files (x86)\\Steam\\bin\\cef\\cef.win7\\steamwebhelper.exe\" action=block");
    system("netsh advfirewall firewall add rule name=\"Steamhelper2\" dir=out program=\"C:\\Program Files (x86)\\Steam\\bin\\cef\\cef.win7x64\\steamwebhelper.exe\" action=block");

}



