#!/usr/bin/env python
import time
from flyt_python import api
drone = api.navigation(timeout=120000) 

# 4 second gap to initalize all the subsytems
time.sleep(4)

print 'taking off'
drone.take_off(5.0) 

drone.position_set(6.5,0,0,relative=True) # for first position
drone.position_set(0,6.5,0,relative=True) #for second position 
drone.position_set(-6.5,0,0,relative=True) #for third postion 
drone.position_set(0,-6.5,0,relative=True) #for fourth postition

print 'Landing'  
drone.land(async=False)

#shutdown the instance
drone.disconnect()
