#ifndef MAP_POINT_H
#define MAP_POINT_H
namespace MINI{

#include "KeyFrame.h"
#include "Map.h"

class MapPoint
{
public:

private:
    // Variables used by local mapping
    long unsigned int mnBALocalForKF;
    long unsigned int mnFuseCandidateForKF;



    // Position in absolute coordinates
    Eigen::Vector3f mWorldPos;

    // Keyframes observing the point and associated index in keyframe
    std::map<KeyFrame*,std::tuple<int,int> > mObservations;


    // Best descriptor to fast matching
    cv::Mat mDescriptor;

    // Reference KeyFrame
    KeyFrame* mpRefKF;
    long unsigned int mBackupRefKFId;
    Map* mpMap;  
};

}

#endif