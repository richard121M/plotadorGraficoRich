/********************************************************************************
** Form generated from reading UI file 'mainplotador.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPLOTADOR_H
#define UI_MAINPLOTADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPlotador
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QTableWidget *tableFuncoes;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLimites;
    QSpinBox *spinMinY;
    QSpinBox *spinMaxX;
    QLabel *labelY;
    QLabel *labelX;
    QSpinBox *spinExpY;
    QLabel *labelMax;
    QSpinBox *spinExpX;
    QLabel *labelExp;
    QSpinBox *spinMaxY;
    QSpinBox *spinMinX;
    QLabel *labelEixo;
    QLabel *labelMin;
    QLabel *grafico;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainPlotador)
    {
        if (MainPlotador->objectName().isEmpty())
            MainPlotador->setObjectName("MainPlotador");
        MainPlotador->resize(849, 601);
        centralwidget = new QWidget(MainPlotador);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(590, 10, 250, 540));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMinimumSize(QSize(250, 540));
        frame->setFrameShape(QFrame::Shape::Box);
        frame->setFrameShadow(QFrame::Shadow::Plain);
        tableFuncoes = new QTableWidget(frame);
        if (tableFuncoes->columnCount() < 2)
            tableFuncoes->setColumnCount(2);
        tableFuncoes->setObjectName("tableFuncoes");
        tableFuncoes->setGeometry(QRect(0, 0, 251, 431));
        tableFuncoes->setTabKeyNavigation(false);
        tableFuncoes->setSelectionMode(QAbstractItemView::SelectionMode::NoSelection);
        tableFuncoes->setColumnCount(2);
        tableFuncoes->verticalHeader()->setVisible(false);
        gridLayoutWidget = new QWidget(frame);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 430, 251, 111));
        gridLimites = new QGridLayout(gridLayoutWidget);
        gridLimites->setObjectName("gridLimites");
        gridLimites->setContentsMargins(0, 0, 0, 0);
        spinMinY = new QSpinBox(gridLayoutWidget);
        spinMinY->setObjectName("spinMinY");
        spinMinY->setMinimum(-9);
        spinMinY->setMaximum(8);
        spinMinY->setValue(-9);

        gridLimites->addWidget(spinMinY, 2, 1, 1, 1);

        spinMaxX = new QSpinBox(gridLayoutWidget);
        spinMaxX->setObjectName("spinMaxX");
        spinMaxX->setMinimum(-8);
        spinMaxX->setMaximum(9);
        spinMaxX->setValue(9);

        gridLimites->addWidget(spinMaxX, 1, 2, 1, 1);

        labelY = new QLabel(gridLayoutWidget);
        labelY->setObjectName("labelY");
        labelY->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelY, 2, 0, 1, 1);

        labelX = new QLabel(gridLayoutWidget);
        labelX->setObjectName("labelX");
        labelX->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelX, 1, 0, 1, 1);

        spinExpY = new QSpinBox(gridLayoutWidget);
        spinExpY->setObjectName("spinExpY");
        spinExpY->setMinimum(-9);
        spinExpY->setMaximum(9);

        gridLimites->addWidget(spinExpY, 2, 3, 1, 1);

        labelMax = new QLabel(gridLayoutWidget);
        labelMax->setObjectName("labelMax");
        labelMax->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelMax, 0, 2, 1, 1);

        spinExpX = new QSpinBox(gridLayoutWidget);
        spinExpX->setObjectName("spinExpX");
        spinExpX->setMinimum(-9);
        spinExpX->setMaximum(9);

        gridLimites->addWidget(spinExpX, 1, 3, 1, 1);

        labelExp = new QLabel(gridLayoutWidget);
        labelExp->setObjectName("labelExp");
        labelExp->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelExp, 0, 3, 1, 1);

        spinMaxY = new QSpinBox(gridLayoutWidget);
        spinMaxY->setObjectName("spinMaxY");
        spinMaxY->setMinimum(-8);
        spinMaxY->setMaximum(9);
        spinMaxY->setValue(9);

        gridLimites->addWidget(spinMaxY, 2, 2, 1, 1);

        spinMinX = new QSpinBox(gridLayoutWidget);
        spinMinX->setObjectName("spinMinX");
        spinMinX->setMinimum(-9);
        spinMinX->setMaximum(8);
        spinMinX->setValue(-9);

        gridLimites->addWidget(spinMinX, 1, 1, 1, 1);

        labelEixo = new QLabel(gridLayoutWidget);
        labelEixo->setObjectName("labelEixo");
        labelEixo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelEixo, 0, 0, 1, 1);

        labelMin = new QLabel(gridLayoutWidget);
        labelMin->setObjectName("labelMin");
        labelMin->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLimites->addWidget(labelMin, 0, 1, 1, 1);

        grafico = new QLabel(centralwidget);
        grafico->setObjectName("grafico");
        grafico->setGeometry(QRect(10, 10, 540, 540));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(grafico->sizePolicy().hasHeightForWidth());
        grafico->setSizePolicy(sizePolicy1);
        grafico->setMinimumSize(QSize(540, 540));
        grafico->setFrameShape(QFrame::Shape::Box);
        grafico->setAlignment(Qt::AlignmentFlag::AlignCenter);
        MainPlotador->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainPlotador);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 849, 22));
        MainPlotador->setMenuBar(menubar);
        statusbar = new QStatusBar(MainPlotador);
        statusbar->setObjectName("statusbar");
        MainPlotador->setStatusBar(statusbar);

        retranslateUi(MainPlotador);

        QMetaObject::connectSlotsByName(MainPlotador);
    } // setupUi

    void retranslateUi(QMainWindow *MainPlotador)
    {
        MainPlotador->setWindowTitle(QCoreApplication::translate("MainPlotador", "MainPlotador", nullptr));
        labelY->setText(QCoreApplication::translate("MainPlotador", "Y", nullptr));
        labelX->setText(QCoreApplication::translate("MainPlotador", "X", nullptr));
        labelMax->setText(QCoreApplication::translate("MainPlotador", "Max", nullptr));
        labelExp->setText(QCoreApplication::translate("MainPlotador", "Exp", nullptr));
        labelEixo->setText(QCoreApplication::translate("MainPlotador", "Eixo", nullptr));
        labelMin->setText(QCoreApplication::translate("MainPlotador", "Min", nullptr));
        grafico->setText(QCoreApplication::translate("MainPlotador", "GRAFICO", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPlotador: public Ui_MainPlotador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPLOTADOR_H
