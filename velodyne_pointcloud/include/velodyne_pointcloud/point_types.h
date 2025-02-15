 /* -*- mode: C++ -*-
  *
 *  Copyright (C) 2011, 2012 Austin Robot Technology
  *
  *  License: Modified BSD Software License Agreement
  *
  *  $Id: data_base.h 1554 2011-06-14 22:11:17Z jack.oquin $
  */
 #ifndef __VELODYNE_POINTCLOUD_POINT_TYPES_H
 #define __VELODYNE_POINTCLOUD_POINT_TYPES_H
 
 #include <pcl/point_types.h>
 
 namespace velodyne_pointcloud
 {
   struct PointXYZIR
  {
     PCL_ADD_POINT4D;                    // quad-word XYZ
     float    intensity;                 
     uint16_t ring;                      
     EIGEN_MAKE_ALIGNED_OPERATOR_NEW     // ensure proper alignment
   } EIGEN_ALIGN16;
 
 }; // namespace velodyne_pointcloud
 
 
 POINT_CLOUD_REGISTER_POINT_STRUCT(velodyne_pointcloud::PointXYZIR,
                                   (float, x, x)
                                   (float, y, y)
                                   (float, z, z)
                                   (float, intensity, intensity)
                                   (uint16_t, ring, ring))
 
 #endif // __VELODYNE_POINTCLOUD_POINT_TYPES_H
