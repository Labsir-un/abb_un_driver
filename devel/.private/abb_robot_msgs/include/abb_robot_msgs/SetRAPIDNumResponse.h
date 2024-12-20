// Generated by gencpp from file abb_robot_msgs/SetRAPIDNumResponse.msg
// DO NOT EDIT!


#ifndef ABB_ROBOT_MSGS_MESSAGE_SETRAPIDNUMRESPONSE_H
#define ABB_ROBOT_MSGS_MESSAGE_SETRAPIDNUMRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace abb_robot_msgs
{
template <class ContainerAllocator>
struct SetRAPIDNumResponse_
{
  typedef SetRAPIDNumResponse_<ContainerAllocator> Type;

  SetRAPIDNumResponse_()
    : result_code(0)
    , message()  {
    }
  SetRAPIDNumResponse_(const ContainerAllocator& _alloc)
    : result_code(0)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint16_t _result_code_type;
  _result_code_type result_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetRAPIDNumResponse_

typedef ::abb_robot_msgs::SetRAPIDNumResponse_<std::allocator<void> > SetRAPIDNumResponse;

typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDNumResponse > SetRAPIDNumResponsePtr;
typedef boost::shared_ptr< ::abb_robot_msgs::SetRAPIDNumResponse const> SetRAPIDNumResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result_code == rhs.result_code &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator1> & lhs, const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_robot_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "aab0cc4b756aaf08eb67ad6459b36b27";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xaab0cc4b756aaf08ULL;
  static const uint64_t static_value2 = 0xeb67ad6459b36b27ULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_robot_msgs/SetRAPIDNumResponse";
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"#-------------------------------------------------------------------------------\n"
"# Service response fields\n"
"#-------------------------------------------------------------------------------\n"
"# Service success/failure indicator.\n"
"# Refer to 'abb_robot_msgs/ServiceResponses' for defined error codes.\n"
"uint16 result_code\n"
"\n"
"# Status message (empty if service succeeded).\n"
"string message\n"
"\n"
;
  }

  static const char* value(const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_code);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetRAPIDNumResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_robot_msgs::SetRAPIDNumResponse_<ContainerAllocator>& v)
  {
    s << indent << "result_code: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.result_code);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_ROBOT_MSGS_MESSAGE_SETRAPIDNUMRESPONSE_H
