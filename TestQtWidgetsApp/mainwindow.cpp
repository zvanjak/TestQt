#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->lineEdit, SIGNAL(textChanged(const QString&)), ui->label, SLOT(setText(const QString&)) );
}

MainWindow::~MainWindow()
{
    delete ui;
}
