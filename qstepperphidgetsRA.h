#ifndef QSTEPPERPHIDGETSRA_H
#define QSTEPPERPHIDGETSRA_H

#include <phidget21.h>

class QStepperPhidgetsRA {
private:
    CPhidgetStepperHandle SH;
    int errorOpen;
    int errorCreate;
    int snumifk;
    int vifk;
    int motorNum;
    double speedMax;
    double speedMin;
    double acc;
    double currMax;
    int stopped;
    double stepsPerSInRA;

public:
    QStepperPhidgetsRA(double,double);
    ~QStepperPhidgetsRA(void);
    void startTracking(void);
    bool travelForNSteps(long,short,int);
    int retrievePhidgetStepperData (int);
    double getKinetics(short);
    void setStepperParams(double, short);
    void shutDownDrive(void);
    bool getStopped(void);
    void stopDrive(void);
    void engageDrive(void);
};
#endif // QSTEPPERPHIDGETSRA_H
