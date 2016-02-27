//
//  CoreSLAMHelper.hpp
//  SmallSlam
//
//  Created by Vinjn Zhang on 2/27/16.
//
//

#ifndef CoreSLAMHelper_hpp
#define CoreSLAMHelper_hpp

#include <stdio.h>

extern "C"
{
#include "CoreSLAM/CoreSLAM.h"    
}

struct CoreSLAM
{
    ts_map_t trajectory;
    ts_map_t map;
    ts_map_t loop_map;
    ts_map_t map_scans;
    
    ts_randomizer_t rnd;
    
    ts_robot_parameters_t robotParams;
    ts_laser_parameters_t laserParams;
    
    ts_state_t state;
    ts_position_t startpos, loop_startpos, loop_endpos, position;
    int loop, loop_start, nb_loops, loop_end[2];

    void setup();
    
    void update();
};

#endif /* CoreSLAMHelper_hpp */
