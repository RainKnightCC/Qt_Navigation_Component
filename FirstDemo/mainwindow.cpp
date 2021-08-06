#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->initTitleName("FaceIPA");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::initTitleName(QString name) {
    this->setWindowTitle(name);
}

