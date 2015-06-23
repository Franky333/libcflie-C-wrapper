//C Wrapper functions (for all public functions)

#include <string.h>
using namespace std;

#include "CCrazyflieWrapper.h"
#include "CCrazyflie.h"

extern "C" 
{
  CCrazyflieWrapped* newCCrazyflie(CCrazyRadioWrapped *cr)
  {
    CCrazyRadio *CCRadio = (CCrazyRadio *)cr;
    CCrazyflie *CCFlie = new CCrazyflie(CCRadio);
    return (CCrazyflieWrapped *)CCFlie;
  }
  void deleteCCrazyflie(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    delete CCFlie;
  }

  void CCrazyflie_setThrust(CCrazyflieWrapped *cf, int nThrust)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    CCFlie->setThrust(nThrust);
  }
  int CCrazyflie_thrust(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->thrust();
  }

  void CCrazyflie_setRoll(CCrazyflieWrapped *cf, float fRoll)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    CCFlie->setRoll(fRoll);
  }
  float CCrazyflie_roll(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->roll();
  }

  void CCrazyflie_setPitch(CCrazyflieWrapped *cf, float fPitch)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    CCFlie->setPitch(fPitch);
  }
  float CCrazyflie_pitch(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->pitch();
  }

  void CCrazyflie_setYaw(CCrazyflieWrapped *cf, float fYaw)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    CCFlie->setYaw(fYaw);
  }
  float CCrazyflie_yaw(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->yaw();
  }

  int CCrazyflie_cycle(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    if(CCFlie->cycle()) return 1;
    else return 0;
  }

  int CCrazyflie_copterInRange(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    if(CCFlie->copterInRange()) return 1;
    else return 0;
  }
  int CCrazyflie_isInitialized(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    if(CCFlie->isInitialized()) return 1;
    else return 0;
  }

  void CCrazyflie_SendSetpoints(CCrazyflieWrapped *cf, int nSendSetpoints)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    if(nSendSetpoints) CCFlie->setSendSetpoints(true);
    else CCFlie->setSendSetpoints(false);
  }
  int CCrazyflie_sendsSetpoints(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    if(CCFlie->sendsSetpoints()) return 1;
    else return 0;
  }

  double CCrazyflie_sensorDoubleValue(CCrazyflieWrapped *cf, char *Name)
  {
    string strName(Name);
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->sensorDoubleValue(strName);
  }
  double CCrazyflie_batteryLevel(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->batteryLevel();
  }

  float CCrazyflie_accX(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->accX();
  }
  float CCrazyflie_accY(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->accY();
  }
  float CCrazyflie_accZ(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->accZ();
  }
  float CCrazyflie_accZW(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->accZW();
  }
  float CCrazyflie_asl(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->asl();
  }
  float CCrazyflie_aslLong(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->aslLong();
  }
  float CCrazyflie_temperature(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->temperature();
  }
  float CCrazyflie_pressure(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->pressure();
  }
  float CCrazyflie_gyroX(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->gyroX();
  }
  float CCrazyflie_gyroY(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->gyroY();
  }
  float CCrazyflie_gyroZ(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->gyroZ();
  }
  float CCrazyflie_batteryState(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->batteryState();
  }
  float CCrazyflie_magX(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->magX();
  }
  float CCrazyflie_magY(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->magY();
  }
  float CCrazyflie_magZ(CCrazyflieWrapped *cf)
  {
    CCrazyflie *CCFlie = (CCrazyflie *)cf;
    return CCFlie->magZ();
  }
}
