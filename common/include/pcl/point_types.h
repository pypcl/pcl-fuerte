/*
 * Software License Agreement (BSD License)
 *
 *  Point Cloud Library (PCL) - www.pointclouds.org
 *  Copyright (c) 2010-2011, Willow Garage, Inc.
 *
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.
 *   * Neither the name of Willow Garage, Inc. nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 *
 * $Id: point_types.h 4685 2012-02-23 00:13:14Z rusu $
 *
 */
#ifndef PCL_DATA_TYPES_H_
#define PCL_DATA_TYPES_H_

#include <pcl/pcl_macros.h>
#include <Eigen/Core>
#include <bitset>
#include <vector>
#include <pcl/ros/register_point_struct.h>

/**
  * \file pcl/point_types.h
  * Defines all the PCL implemented PointT point type structures
  * \ingroup common
  */

// We're doing a lot of black magic with Boost here, so disable warnings in Maintainer mode, as we will never
// be able to fix them anyway
#ifdef BUILD_Maintainer
#  if defined __GNUC__
#    if __GNUC__ == 4 && __GNUC_MINOR__ > 3
#      pragma GCC diagnostic ignored "-Weffc++"
#      pragma GCC diagnostic ignored "-pedantic"
#    else
#      pragma GCC system_header 
#    endif
#  elif defined _MSC_VER
#    pragma warning(push, 1)
#  endif
#endif

/** @{*/
namespace pcl
{
  /** \brief Members: float x, y, z 
    * \ingroup common
    */
  struct PointXYZ;

  /** \brief Members: float x, y, z, intensity 
    * \ingroup common
    */
  struct PointXYZI;

  /** \brief Members: float x, y, z, uin32_t label 
    * \ingroup common
    */
  struct PointXYZL;

  /** \brief Members: uint32_t label 
    * \ingroup common
    */
  struct Label;

  /** \brief Members: float x, y, z; uint32_t rgba 
    * \ingroup common
    */
  struct PointXYZRGBA;

  /** \brief Members: float x, y, z, rgb 
    * \ingroup common
    */
  struct PointXYZRGB;

  /** \brief Members: float x, y, z, rgb, uint32_t label 
    * \ingroup common
    */
  struct PointXYZRGBL;

  /** \brief Members: float x, y, z, h, s, v 
    * \ingroup common
    */
  struct PointXYZHSV;

  /** \brief Members: float x, y 
    * \ingroup common
    */
  struct PointXY;

  /** \brief Members: float x, y, z, strength 
    * \ingroup common
    */
  struct InterestPoint;

  /** \brief Members: float normal[3], curvature 
    * \ingroup common
    */
  struct Normal;

  /** \brief Members: float normal[3] 
    * \ingroup common
    */
  struct Axis;

  /** \brief Members: float x, y, z; float normal[3], curvature 
    * \ingroup common
    */
  struct PointNormal;

  /** \brief Members: float x, y, z, rgb, normal[3], curvature 
    * \ingroup common
    */
  struct PointXYZRGBNormal;

  /** \brief Members: float x, y, z, intensity, normal[3], curvature 
    * \ingroup common
    */
  struct PointXYZINormal;

  /** \brief Members: float x, y, z (union with float point[4]), range 
    * \ingroup common
    */
  struct PointWithRange;

  /** \brief Members: float x, y, z, vp_x, vp_y, vp_z 
    * \ingroup common
    */
  struct PointWithViewpoint;

  /** \brief Members: float j1, j2, j3 
    * \ingroup common
    */
  struct MomentInvariants;

  /** \brief Members: float r_min, r_max 
    * \ingroup common
    */
  struct PrincipalRadiiRSD;

  /** \brief Members: uint8_t boundary_point 
    * \ingroup common
    */
  struct Boundary;

  /** \brief Members: float principal_curvature[3], pc1, pc2 
    * \ingroup common
    */
  struct PrincipalCurvatures;

  /** \brief Members: std::vector<float> descriptor, rf[9] 
    * \ingroup common
    */
  struct SHOT;

  /** \brief Members: Axis x_axis, y_axis, z_axis; float confidence 
    * \ingroup common
    */
  struct ReferenceFrame;

  /** \brief Members: std::vector<float> descriptor, rf[9] 
    * \ingroup common
    */
  struct ShapeContext;

  /** \brief Members: float pfh[125] 
    * \ingroup common
    */
  struct PFHSignature125;

  /** \brief Members: float pfhrgb[250] 
    * \ingroup common
    */
  struct PFHRGBSignature250;

  /** \brief Members: float f1, f2, f3, f4, alpha_m 
    * \ingroup common
    */
  struct PPFSignature;

  /** \brief Members: float f1, f2, f3, f4, r_ratio, g_ratio, b_ratio, alpha_m 
    * \ingroup common
    */
  struct PPFRGBSignature;

  /** \brief Members: float values[12] 
    * \ingroup common
    */
  struct NormalBasedSignature12;

  /** \brief Members: float fpfh[33] 
    * \ingroup common
    */
  struct FPFHSignature33;

  /** \brief Members: float vfh[308] 
    * \ingroup common
    */
  struct VFHSignature308;

  /** \brief Members: float x, y, z, roll, pitch, yaw; float descriptor[36] 
    * \ingroup common
    */
  struct Narf36;

  /** \brief Data type to store extended information about a transition from foreground to backgroundSpecification of the fields for BorderDescription::traits. 
    * \ingroup common
    */
  typedef std::bitset<32> BorderTraits;

  /** \brief Specification of the fields for BorderDescription::traits. 
    * \ingroup common
    */
  enum BorderTrait
  {
    BORDER_TRAIT__OBSTACLE_BORDER, BORDER_TRAIT__SHADOW_BORDER, BORDER_TRAIT__VEIL_POINT,
    BORDER_TRAIT__SHADOW_BORDER_TOP, BORDER_TRAIT__SHADOW_BORDER_RIGHT, BORDER_TRAIT__SHADOW_BORDER_BOTTOM,
    BORDER_TRAIT__SHADOW_BORDER_LEFT, BORDER_TRAIT__OBSTACLE_BORDER_TOP, BORDER_TRAIT__OBSTACLE_BORDER_RIGHT,
    BORDER_TRAIT__OBSTACLE_BORDER_BOTTOM, BORDER_TRAIT__OBSTACLE_BORDER_LEFT, BORDER_TRAIT__VEIL_POINT_TOP,
    BORDER_TRAIT__VEIL_POINT_RIGHT, BORDER_TRAIT__VEIL_POINT_BOTTOM, BORDER_TRAIT__VEIL_POINT_LEFT
  };

  /** \brief Members: int x, y; BorderTraits traits
    * \ingroup common
    */ 
  struct BorderDescription;

  /** \brief Members: float gradient[3]
    * \ingroup common
    */  
  struct IntensityGradient;

  /** \brief Members: float histogram[N]
    * \ingroup common
    */ 
  template<int N>
  struct Histogram;

  /** \brief Members: float x, y, z, scale
    * \ingroup common
    */ 
  struct PointWithScale;

  /** \brief Members: float x, y, z, normal[3], rgba, radius, confidence, curvature
    * \ingroup common
    */ 
  struct PointSurfel;
}

/** @} */

#include "pcl/impl/point_types.hpp"  // Include struct definitions

// ==============================
// =====POINT_CLOUD_REGISTER=====
// ==============================

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZ,
    (float, x, x)
    (float, y, y)
    (float, z, z)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZ, pcl::_PointXYZ)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZRGBA,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (uint32_t, rgba, rgba)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZRGBA, pcl::_PointXYZRGBA)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZRGB,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, rgb, rgb)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZRGB, pcl::_PointXYZRGB)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZRGBL,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (uint32_t, rgba, rgba)
    (uint32_t, label, label)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZRGBL, pcl::_PointXYZRGBL)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZHSV,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, h, h)
    (float, s, s)
    (float, v, v)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZHSV, pcl::_PointXYZHSV)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointXY,
    (float, x, x)
    (float, y, y)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::InterestPoint,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, strength, strength)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZI,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, intensity, intensity)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZI, pcl::_PointXYZI)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointXYZL,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (uint32_t, label, label)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::Label,
    (uint32_t, label, label)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_Normal,
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (float, curvature, curvature)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::Normal, pcl::_Normal)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_Axis,
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::Axis, pcl::_Axis)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointNormal,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (float, curvature, curvature)
)
POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointXYZRGBNormal,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, rgb, rgb)
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (float, curvature, curvature)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointXYZRGBNormal, pcl::_PointXYZRGBNormal)
POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointXYZINormal,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, intensity, intensity)
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (float, curvature, curvature)
)
POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointWithRange,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, range, range)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_PointWithViewpoint,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, vp_x, vp_x)
    (float, vp_y, vp_y)
    (float, vp_z, vp_z)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::PointWithViewpoint, pcl::_PointWithViewpoint)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::MomentInvariants,
    (float, j1, j1)
    (float, j2, j2)
    (float, j3, j3)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PrincipalRadiiRSD,
    (float, r_min, r_min)
    (float, r_max, r_max)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::Boundary,
    (uint8_t, boundary_point, boundary_point)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PrincipalCurvatures,
    (float, principal_curvature_x, principal_curvature_x)
    (float, principal_curvature_y, principal_curvature_y)
    (float, principal_curvature_z, principal_curvature_z)
    (float, pc1, pc1)
    (float, pc2, pc2)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PFHSignature125,
    (float[125], histogram, pfh)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PFHRGBSignature250,
    (float[250], histogram, pfhrgb)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PPFSignature,
    (float, f1, f1)
    (float, f2, f2)
    (float, f3, f3)
    (float, f4, f4)
    (float, alpha_m, alpha_m)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PPFRGBSignature,
    (float, f1, f1)
    (float, f2, f2)
    (float, f3, f3)
    (float, f4, f4)
    (float, r_ratio, r_ratio)
    (float, g_ratio, g_ratio)
    (float, b_ratio, b_ratio)
    (float, alpha_m, alpha_m)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::NormalBasedSignature12,
    (float[12], values, values)
)

//POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_SHOT352,
//                                   (float[352], descriptor, shot)
//																	 (float[9], rf, rf)
//                                   (uint32_t, size, size)
//)
//POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::SHOT352, pcl::_SHOT352)
//
//POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_SHOT1344,
//                                   (float[1344], descriptor, shot)
//																	 (float[9], rf, rf)
//                                   (uint32_t, size, size)
//)
//POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::SHOT1344, pcl::_SHOT1344)


POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::FPFHSignature33,
    (float[33], histogram, fpfh)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::VFHSignature308,
    (float[308], histogram, vfh)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::Narf36,
    (float[36], descriptor, descriptor)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::GFPFHSignature16,
    (float[16], histogram, gfpfh)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::IntensityGradient,
    (float, gradient_x, gradient_x)
    (float, gradient_y, gradient_y)
    (float, gradient_z, gradient_z)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::PointWithScale,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, scale, scale)
)

POINT_CLOUD_REGISTER_POINT_STRUCT(pcl::PointSurfel,
    (float, x, x)
    (float, y, y)
    (float, z, z)
    (float, normal_x, normal_x)
    (float, normal_y, normal_y)
    (float, normal_z, normal_z)
    (uint32_t, rgba, rgba)
    (float, radius, radius)
    (float, confidence, confidence)
    (float, curvature, curvature)
)

POINT_CLOUD_REGISTER_POINT_STRUCT (pcl::_ReferenceFrame,
    (float[3], x_axis, x_axis)
    (float[3], y_axis, y_axis)
    (float[3], z_axis, z_axis)
    (float, confidence, confidence)
)
POINT_CLOUD_REGISTER_POINT_WRAPPER(pcl::ReferenceFrame, pcl::_ReferenceFrame)

//POINT_CLOUD_REGISTER_POINT_STRUCT(pcl::BorderDescription,
//                                  (int, x, x)
//                                  (int, y, y)
//                                  (uint32_t, traits, traits)
//)

#ifdef BUILD_Maintainer
#  if defined __GNUC__
#    if __GNUC__ == 4 && __GNUC_MINOR__ > 3
#      pragma GCC diagnostic warning "-Weffc++"
#      pragma GCC diagnostic warning "-pedantic"
#    endif
#  elif defined _MSC_VER
#    pragma warning(pop)
#  endif
#endif

#endif  //#ifndef PCL_DATA_TYPES_H_
