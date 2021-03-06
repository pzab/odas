#ifndef __ODAS_SIGNAL_SCAN
#define __ODAS_SIGNAL_SCAN

   /**
    * \file     scan.h
    * \author   François Grondin <francois.grondin2@usherbrooke.ca>
    * \version  2.0
    * \date     2018-03-18
    * \copyright
    *
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    *
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * You should have received a copy of the GNU General Public License
    * along with this program.  If not, see <http://www.gnu.org/licenses/>.
    *
    */

    #include <stdlib.h>
    #include <string.h>

    #include "pair.h"
    #include "point.h"
    #include "tdoa.h"
    #include "delta.h"
    #include "index.h"
    #include "spatialindex.h"

    //! Scan setup
    typedef struct scans_obj {

        unsigned int nLevels;

        points_obj ** points;
        tdoas_obj ** tdoas;
        deltas_obj ** deltas;
        spatialindexes_obj ** spatialindexes;
        pairs_obj * pairs;

        indexes_obj ** indexes;       

    } scans_obj;

    scans_obj * scans_construct_null(const unsigned int nLevels);

    void scans_destroy(scans_obj * obj);

#endif