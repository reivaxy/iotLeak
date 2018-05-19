/**
 *  iotinator Water Leak Detection Slave module 
 *  Xavier Grosjean 2018
 *  Creative Commons Attribution-NonCommercial-ShareAlike 4.0 International Public License
 */
 
#pragma once 
#include "config.h"
#include <XIOTModule.h>
 
class LeakModule:public XIOTModule {
public:
  LeakModule(LeakConfigClass* config, int displayAddr, int displaySda, int displayScl);
  
protected:
  char* _customRegistrationData() override;
  
};