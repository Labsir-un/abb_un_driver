// Generated by gencpp from file abb_rapid_sm_addin_msgs/EGMSettings.msg
// DO NOT EDIT!


#ifndef ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSETTINGS_H
#define ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSETTINGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <abb_rapid_sm_addin_msgs/EGMSetupSettings.h>
#include <abb_rapid_sm_addin_msgs/EGMActivateSettings.h>
#include <abb_rapid_sm_addin_msgs/EGMRunSettings.h>
#include <abb_rapid_sm_addin_msgs/EGMStopSettings.h>

namespace abb_rapid_sm_addin_msgs
{
template <class ContainerAllocator>
struct EGMSettings_
{
  typedef EGMSettings_<ContainerAllocator> Type;

  EGMSettings_()
    : allow_egm_motions(false)
    , use_presync(false)
    , setup_uc()
    , activate()
    , run()
    , stop()  {
    }
  EGMSettings_(const ContainerAllocator& _alloc)
    : allow_egm_motions(false)
    , use_presync(false)
    , setup_uc(_alloc)
    , activate(_alloc)
    , run(_alloc)
    , stop(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _allow_egm_motions_type;
  _allow_egm_motions_type allow_egm_motions;

   typedef uint8_t _use_presync_type;
  _use_presync_type use_presync;

   typedef  ::abb_rapid_sm_addin_msgs::EGMSetupSettings_<ContainerAllocator>  _setup_uc_type;
  _setup_uc_type setup_uc;

   typedef  ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator>  _activate_type;
  _activate_type activate;

   typedef  ::abb_rapid_sm_addin_msgs::EGMRunSettings_<ContainerAllocator>  _run_type;
  _run_type run;

   typedef  ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator>  _stop_type;
  _stop_type stop;





  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> const> ConstPtr;

}; // struct EGMSettings_

typedef ::abb_rapid_sm_addin_msgs::EGMSettings_<std::allocator<void> > EGMSettings;

typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMSettings > EGMSettingsPtr;
typedef boost::shared_ptr< ::abb_rapid_sm_addin_msgs::EGMSettings const> EGMSettingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator2> & rhs)
{
  return lhs.allow_egm_motions == rhs.allow_egm_motions &&
    lhs.use_presync == rhs.use_presync &&
    lhs.setup_uc == rhs.setup_uc &&
    lhs.activate == rhs.activate &&
    lhs.run == rhs.run &&
    lhs.stop == rhs.stop;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator1> & lhs, const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace abb_rapid_sm_addin_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c458fd979a6a372744a25dc9e88085d";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c458fd979a6a372ULL;
  static const uint64_t static_value2 = 0x744a25dc9e88085dULL;
};

template<class ContainerAllocator>
struct DataType< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb_rapid_sm_addin_msgs/EGMSettings";
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Indicator for if EGM motions are allowed to start.\n"
"bool allow_egm_motions\n"
"\n"
"# Indicator for if RAPID tasks should be synced before starting EGM motions\n"
"# (only used in multi robot systems).\n"
"bool use_presync\n"
"\n"
"# Settings for EGMSetupUC instructions.\n"
"EGMSetupSettings setup_uc\n"
"\n"
"# Settings for EGMAct instructions.\n"
"EGMActivateSettings activate\n"
"\n"
"# Settings for EGMRun instructions.\n"
"EGMRunSettings run\n"
"\n"
"# Settings for EGMStop instructions.\n"
"EGMStopSettings stop\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_sm_addin_msgs/EGMSetupSettings\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMSetupSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMSetupSettings\" are for example used with the RAPID EGM instruction\n"
"#   \"EGMSetupUC\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Indicator for if the EGM controller should apply filtering on the\n"
"# EGM references.\n"
"bool use_filtering\n"
"\n"
"# Communication timeout [s].\n"
"float32 comm_timeout\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_sm_addin_msgs/EGMActivateSettings\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMActivateSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMActivateSettings\" are for example used with the RAPID EGM instructions\n"
"#   \"EGMActJoint\" and \"EGMActPose\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Tool to use for EGM motions.\n"
"abb_rapid_msgs/ToolData tool\n"
"\n"
"# Work object to use for EGM motions.\n"
"abb_rapid_msgs/WObjData wobj\n"
"\n"
"# Correction frame to use for EGM motions (only used in EGM pose mode).\n"
"abb_rapid_msgs/Pose correction_frame\n"
"\n"
"# Sensor frame to use for EGM motions (only used in EGM pose mode).\n"
"abb_rapid_msgs/Pose sensor_frame\n"
"\n"
"# Condition threshold value [deg or mm] for when an EGM motion's convergence\n"
"# criteria is considered to be fulfilled.\n"
"float32 cond_min_max\n"
"\n"
"# Low pass filter bandwidth [Hz] for the EGM controller.\n"
"float32 lp_filter\n"
"\n"
"# Sample rate [ms] for the EGM communication.\n"
"uint8 sample_rate\n"
"\n"
"# Maximum admitted joint speed [deg/s].\n"
"float32 max_speed_deviation\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/ToolData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"tooldata\" (tool data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Defines whether or not the robot is holding the tool:\n"
"# - TRUE: The robot is holding the tool.\n"
"# - FALSE: The robot is not holding the tool, that is, a stationary tool.\n"
"bool robhold\n"
"\n"
"# The tool coordinate system, that is:\n"
"# - The position of the TCP (x, y and z) in mm,\n"
"#   expressed in the wrist coordinate system (tool0).\n"
"# - The orientation of the tool coordinate system,\n"
"#   expressed in the wrist coordinate system.\n"
"Pose tframe\n"
"\n"
"# The load of the tool (if robot held tool).\n"
"# The load of the gripper holding the work object (if stationary tool).\n"
"LoadData tload\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Pose\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"pose\" (coordinate transformations).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The displacement in position (x, y, and z) of the coordinate system.\n"
"Pos trans\n"
"\n"
"# The rotation of the coordinate system.\n"
"Orient rot\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Pos\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"pos\" (positions (only X, Y and Z)).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The x-, y- and z-value of the position.\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/Orient\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"orient\" (orientation).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Quaternion 1-4.\n"
"float32 q1\n"
"float32 q2\n"
"float32 q3\n"
"float32 q4\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/LoadData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"loaddata\" (load data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# The mass (weight) of the load in kg.\n"
"float32 mass\n"
"\n"
"# The center of gravity of the payload, expressed in mm,\n"
"# in the tool coordinate system if the robot is holding the tool.\n"
"#\n"
"# If a stationary tool is used then the center of gravity for the payload\n"
"# held by the gripper is expressed in the object frame of the work object\n"
"# coordinate system moved by the robot.\n"
"Pos cog\n"
"\n"
"# The orientation of the axes of moment.\n"
"#\n"
"# These are the principal axes of the payload\n"
"# moment of inertia with origin in cog.\n"
"#\n"
"# If the robot is holding the tool, the axes of moment\n"
"# are expressed in the tool coordinate system.\n"
"Orient aom\n"
"\n"
"# The moment of inertia of the load around the x-, y- and z-axis,\n"
"# expressed in kgm^2.\n"
"float32 ix\n"
"float32 iy\n"
"float32 iz\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_msgs/WObjData\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the\n"
"#   RAPID data type \"wobjdata\" (work object data).\n"
"#\n"
"# Note:\n"
"#   Please see the \"Technical reference manual - RAPID Instructions,\n"
"#   Functions and Data types\" for more details.\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Defines whether or not the robot in the actual\n"
"# program task is holding the work object:\n"
"# - TRUE: The robot is holding the work object,\n"
"#         i.e. using a stationary tool.\n"
"# - FALSE: The robot is not holding the work object,\n"
"#          i.e. the robot is holding the tool.\n"
"bool robhold\n"
"\n"
"# Defines whether or not a fixed user coordinate system is used:\n"
"# - TRUE: Fixed user coordinate system.\n"
"# - FALSE: Movable user coordinate system,\n"
"#          i.e. coordinated external axes are used.\n"
"#          Also to be used in a MultiMove system in\n"
"#          semicoordinated or synchronized coordinated mode.\n"
"bool ufprog\n"
"\n"
"# The mechanical unit with which the robot movements are coordinated.\n"
"#\n"
"# Only specified in the case of movable user\n"
"# coordinate systems (ufprog is FALSE).\n"
"string ufmec\n"
"\n"
"# The user coordinate system, i.e. the position\n"
"# of the current work surface or fixture.\n"
"Pose uframe\n"
"\n"
"# The object coordinate system, i.e. the position\n"
"# of the current work object.\n"
"Pose oframe\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_sm_addin_msgs/EGMRunSettings\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMRunSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMRunSettings\" are for example used with the RAPID EGM instructions\n"
"#   \"EGMRunJoint\" and \"EGMRunPose\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Condition time [s] for how long an EGM motion's convergence criteria must be\n"
"# fulfilled before the motion is considered to be finished.\n"
"float32 cond_time\n"
"\n"
"# Ramp in time [s].\n"
"float32 ramp_in_time\n"
"\n"
"# Static offset applied on top of the EGM references\n"
"# (only used in EGM pose mode).\n"
"abb_rapid_msgs/Pose offset\n"
"\n"
"# Position correction gain for the EGM controller.\n"
"float32 pos_corr_gain\n"
"\n"
"================================================================================\n"
"MSG: abb_rapid_sm_addin_msgs/EGMStopSettings\n"
"#-------------------------------------------------------------------------------\n"
"# Description:\n"
"#   The purpose of this message definition, is to represent the custom RAPID\n"
"#   data type \"EGMStopSettings\" from the RobotWare \"StateMachine Add-In\".\n"
"#\n"
"# Note:\n"
"#   \"EGMStopSettings\" are for example used with the RAPID EGM instruction\n"
"#   \"EGMStop\".\n"
"#-------------------------------------------------------------------------------\n"
"\n"
"#-------------------------------------------------------------------------------\n"
"# Message fields\n"
"#-------------------------------------------------------------------------------\n"
"# Ramp out time [s].\n"
"float32 ramp_out_time\n"
;
  }

  static const char* value(const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.allow_egm_motions);
      stream.next(m.use_presync);
      stream.next(m.setup_uc);
      stream.next(m.activate);
      stream.next(m.run);
      stream.next(m.stop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EGMSettings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::abb_rapid_sm_addin_msgs::EGMSettings_<ContainerAllocator>& v)
  {
    s << indent << "allow_egm_motions: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.allow_egm_motions);
    s << indent << "use_presync: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.use_presync);
    s << indent << "setup_uc: ";
    s << std::endl;
    Printer< ::abb_rapid_sm_addin_msgs::EGMSetupSettings_<ContainerAllocator> >::stream(s, indent + "  ", v.setup_uc);
    s << indent << "activate: ";
    s << std::endl;
    Printer< ::abb_rapid_sm_addin_msgs::EGMActivateSettings_<ContainerAllocator> >::stream(s, indent + "  ", v.activate);
    s << indent << "run: ";
    s << std::endl;
    Printer< ::abb_rapid_sm_addin_msgs::EGMRunSettings_<ContainerAllocator> >::stream(s, indent + "  ", v.run);
    s << indent << "stop: ";
    s << std::endl;
    Printer< ::abb_rapid_sm_addin_msgs::EGMStopSettings_<ContainerAllocator> >::stream(s, indent + "  ", v.stop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ABB_RAPID_SM_ADDIN_MSGS_MESSAGE_EGMSETTINGS_H
