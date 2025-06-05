#include "MyForm.h"

MyForm::MyForm (QWidget* parent) : QWidget(parent)
{
    ui.setupUi(this);
    connect(ui.aturaButton, &QPushButton::clicked, [this]() {
        ui.widget->atura();
    });
    connect(ui.engegaButton, &QPushButton::clicked, [this]() {
        ui.widget->engega();
    });

    // Conexión para el botón de cambiar cámara
    connect(ui.cameraButton, &QPushButton::clicked, [this]() {
        ui.widget->setCamera();
    });
}
