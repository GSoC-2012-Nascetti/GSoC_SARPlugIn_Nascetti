/*
* The information in this file is
* Copyright(c) 2012, Andrea Nascetti <andreanascetti@gmail.com>
* and is subject to the terms and conditions of the
* GNU Lesser General Public License Version 2.1
* The license text is available from
* http://www.gnu.org/licenses/lgpl.html
*/

#ifndef ORTHO_GUI_H
#define ORTHO_GUI_H

#include <QtGui/QAction>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QRadioButton>
#include "PlotWidget.h"
#include "DockWindow.h"
#include "Layer.h"
#include "TerraSAR_Metadata.h"
#include "RasterElement.h"
#include "SAR_Model.h"


class QComboBox;
class QDoubleSpinBox;
class QLabel;

class Ortho_GUI : public QDialog
{
    Q_OBJECT

public:
    Ortho_GUI( QWidget* pParent = 0, const char* pName = 0, bool modal = FALSE );
    ~Ortho_GUI();

public slots:

   void StartOrtho();
   void CheckImage();
   void CheckModel();

private:
	
   TerraSAR_Metadata Metadata;
   SAR_Model *Model;
   RasterElement *pCube;

   Ortho_GUI(const Ortho_GUI& rhs);
   Ortho_GUI& operator=(const Ortho_GUI& rhs);

   void CheckButton(QAbstractButton* pButton);

   std::string image_path;
   std::string image_name;

   QPushButton* mpCancelButton;
   QPushButton* mpApplyButton;
   QPushButton* mpStartOrtho;
   QPushButton* mpCheckModel;
   QPushButton* mpCheckImage;

   QComboBox* mpImageListCombo;
   QComboBox* mpDSMListCombo;
   QComboBox* mpInterpolationList;

   QDoubleSpinBox* Height;
   QDoubleSpinBox* GeoidOffSet;
   QDoubleSpinBox* X_Spacing;
   QDoubleSpinBox* Y_Spacing;

   QLabel* Datum;
   QLabel* Resampling;

   QRadioButton* mpFlatten;
   QRadioButton* mpDsm;

   QButtonGroup* pOrthoModeGroup;
   QGroupBox* box2;
   QGroupBox* box3;
   QGroupBox* box4;

   void init();
   std::vector<std::string> mCubeNames;


};

#endif
