/* Software License Agreement (BSD License)
 *
 * Copyright (c) 2011, Willow Garage, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * Auto-generated by genmsg_cpp from file /u/gerkey/tmp/ros-fuerte-pcl-msgs_binarydeb_oneiric_i386/work/ros-fuerte-pcl-msgs-0.1.2/msg/PolygonMesh.msg
 *
 */


#ifndef PCL_MESSAGE_POLYGONMESH_H
#define PCL_MESSAGE_POLYGONMESH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl/Vertices.h>

namespace pcl
{
template <class ContainerAllocator>
struct PolygonMesh_
{
  typedef PolygonMesh_<ContainerAllocator> Type;

  PolygonMesh_()
    : header()
    , cloud()
    , polygons()  {
    }
  PolygonMesh_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , cloud(_alloc)
    , polygons(_alloc)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _cloud_type;
  _cloud_type cloud;

   typedef std::vector< ::pcl::Vertices_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::pcl::Vertices_<ContainerAllocator> >::other >  _polygons_type;
  _polygons_type polygons;




  typedef boost::shared_ptr< ::pcl::PolygonMesh_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::pcl::PolygonMesh_<ContainerAllocator> const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;

}; // struct PolygonMesh_

typedef ::pcl::PolygonMesh_<std::allocator<void> > PolygonMesh;

typedef boost::shared_ptr< ::pcl::PolygonMesh > PolygonMeshPtr;
typedef boost::shared_ptr< ::pcl::PolygonMesh const> PolygonMeshConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::pcl::PolygonMesh_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::pcl::PolygonMesh_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace pcl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': '/opt/ros/fuerte/share/std_msgs/cmake/../msg', 'sensor_msgs': '/opt/ros/fuerte/share/sensor_msgs/cmake/../msg', 'pcl': '/u/gerkey/tmp/ros-fuerte-pcl-msgs_binarydeb_oneiric_i386/work/ros-fuerte-pcl-msgs-0.1.2/msg'}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::pcl::PolygonMesh_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::pcl::PolygonMesh_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl::PolygonMesh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::pcl::PolygonMesh_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl::PolygonMesh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::pcl::PolygonMesh_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::pcl::PolygonMesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "45a5fc6ad2cde8489600a790acc9a38a";
  }

  static const char* value(const ::pcl::PolygonMesh_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x45a5fc6ad2cde848ULL;
  static const uint64_t static_value2 = 0x9600a790acc9a38aULL;
};

template<class ContainerAllocator>
struct DataType< ::pcl::PolygonMesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "pcl/PolygonMesh";
  }

  static const char* value(const ::pcl::PolygonMesh_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::pcl::PolygonMesh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "todo";
  }

  static const char* value(const ::pcl::PolygonMesh_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::pcl::PolygonMesh_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.cloud);
      stream.next(m.polygons);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PolygonMesh_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::pcl::PolygonMesh_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::pcl::PolygonMesh_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "cloud: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.cloud);
    s << indent << "polygons[]" << std::endl;
    for (size_t i = 0; i < v.polygons.size(); ++i)
    {
      s << indent << "  polygons[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::pcl::Vertices_<ContainerAllocator> >::stream(s, indent + "    ", v.polygons[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PCL_MESSAGE_POLYGONMESH_H
