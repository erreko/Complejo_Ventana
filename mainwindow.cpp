#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "complejo.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->Suma_pushButton,SIGNAL(clicked()),this,SLOT(ClickSuma()));
    connect(ui->Resta_pushButton,SIGNAL(clicked()),this, SLOT(ClickResta()));
    connect(ui->Mul_pushButton,SIGNAL(clicked()),this,SLOT(ClickMul()));
    connect(ui->Conjugado_pushButton,SIGNAL(clicked()),this,SLOT(ClickConjugado()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClickSuma()
{
    QString Re, Im;
    Complejo a, b, c;

    a.setRe(ui->Num1_Real_lineEdit->text().toFloat());
    a.setIm(ui->Num1_Ima_lineEdit->text().toFloat());

    b.setRe(ui->Num2_Real_lineEdit->text().toFloat());
    b.setIm(ui->Num2_Ima_lineEdit->text().toFloat());

    c.suma(a,b);

    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    ui->Res_Real_lineEdit->setText(Re);
    ui->Res_Ima_lineEdit->setText(Im);


}

void MainWindow::ClickResta()
{
    QString Re, Im;
    Complejo a, b, c;

    a.setRe(ui->Num1_Real_lineEdit->text().toFloat());
    a.setIm(ui->Num1_Ima_lineEdit->text().toFloat());

    b.setRe(ui->Num2_Real_lineEdit->text().toFloat());
    b.setIm(ui->Num2_Ima_lineEdit->text().toFloat());

    c.resta(a,b);

    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    ui->Res_Real_lineEdit->setText(Re);
    ui->Res_Ima_lineEdit->setText(Im);


}

void MainWindow::ClickMul()
{
    QString Re, Im;
    Complejo a, b, c;

    a.setRe(ui->Num1_Real_lineEdit->text().toFloat());
    a.setIm(ui->Num1_Ima_lineEdit->text().toFloat());

    b.setRe(ui->Num2_Real_lineEdit->text().toFloat());
    b.setIm(ui->Num2_Ima_lineEdit->text().toFloat());

    c.mul(a,b);

    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    ui->Res_Real_lineEdit->setText(Re);
    ui->Res_Ima_lineEdit->setText(Im);


}

void MainWindow::ClickConjugado()
{
    QString Re, Im;
    Complejo a, c;

    a.setRe(ui->Num1_Real_lineEdit->text().toFloat());
    a.setIm(ui->Num1_Ima_lineEdit->text().toFloat());

    c.conjugado(a);

    Re = QString::number(c.getRe());
    Im = QString::number(c.getIm());

    ui->Res_Real_lineEdit->setText(Re);
    ui->Res_Ima_lineEdit->setText(Im);


}

