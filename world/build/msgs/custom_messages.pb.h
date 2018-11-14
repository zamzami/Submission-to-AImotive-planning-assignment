// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: custom_messages.proto

#ifndef PROTOBUF_custom_5fmessages_2eproto__INCLUDED
#define PROTOBUF_custom_5fmessages_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "time.pb.h"
#include "vector2d.pb.h"
// @@protoc_insertion_point(includes)

namespace custom_messages {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_custom_5fmessages_2eproto();
void protobuf_AssignDesc_custom_5fmessages_2eproto();
void protobuf_ShutdownFile_custom_5fmessages_2eproto();

class Command;
class Statistics;
class VehicleState;
class WorldState;

// ===================================================================

class VehicleState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:custom_messages.VehicleState) */ {
 public:
  VehicleState();
  virtual ~VehicleState();

  VehicleState(const VehicleState& from);

  inline VehicleState& operator=(const VehicleState& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const VehicleState& default_instance();

  void Swap(VehicleState* other);

  // implements Message ----------------------------------------------

  inline VehicleState* New() const { return New(NULL); }

  VehicleState* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const VehicleState& from);
  void MergeFrom(const VehicleState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(VehicleState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 vehicle_id = 1;
  bool has_vehicle_id() const;
  void clear_vehicle_id();
  static const int kVehicleIdFieldNumber = 1;
  ::google::protobuf::int32 vehicle_id() const;
  void set_vehicle_id(::google::protobuf::int32 value);

  // required int32 lane_id = 2;
  bool has_lane_id() const;
  void clear_lane_id();
  static const int kLaneIdFieldNumber = 2;
  ::google::protobuf::int32 lane_id() const;
  void set_lane_id(::google::protobuf::int32 value);

  // required .gazebo.msgs.Vector2d position = 3;
  bool has_position() const;
  void clear_position();
  static const int kPositionFieldNumber = 3;
  const ::gazebo::msgs::Vector2d& position() const;
  ::gazebo::msgs::Vector2d* mutable_position();
  ::gazebo::msgs::Vector2d* release_position();
  void set_allocated_position(::gazebo::msgs::Vector2d* position);

  // required .gazebo.msgs.Vector2d velocity = 4;
  bool has_velocity() const;
  void clear_velocity();
  static const int kVelocityFieldNumber = 4;
  const ::gazebo::msgs::Vector2d& velocity() const;
  ::gazebo::msgs::Vector2d* mutable_velocity();
  ::gazebo::msgs::Vector2d* release_velocity();
  void set_allocated_velocity(::gazebo::msgs::Vector2d* velocity);

  // @@protoc_insertion_point(class_scope:custom_messages.VehicleState)
 private:
  inline void set_has_vehicle_id();
  inline void clear_has_vehicle_id();
  inline void set_has_lane_id();
  inline void clear_has_lane_id();
  inline void set_has_position();
  inline void clear_has_position();
  inline void set_has_velocity();
  inline void clear_has_velocity();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 vehicle_id_;
  ::google::protobuf::int32 lane_id_;
  ::gazebo::msgs::Vector2d* position_;
  ::gazebo::msgs::Vector2d* velocity_;
  friend void  protobuf_AddDesc_custom_5fmessages_2eproto();
  friend void protobuf_AssignDesc_custom_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_custom_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static VehicleState* default_instance_;
};
// -------------------------------------------------------------------

class WorldState : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:custom_messages.WorldState) */ {
 public:
  WorldState();
  virtual ~WorldState();

  WorldState(const WorldState& from);

  inline WorldState& operator=(const WorldState& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const WorldState& default_instance();

  void Swap(WorldState* other);

  // implements Message ----------------------------------------------

  inline WorldState* New() const { return New(NULL); }

  WorldState* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const WorldState& from);
  void MergeFrom(const WorldState& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(WorldState* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required .gazebo.msgs.Time time = 1;
  bool has_time() const;
  void clear_time();
  static const int kTimeFieldNumber = 1;
  const ::gazebo::msgs::Time& time() const;
  ::gazebo::msgs::Time* mutable_time();
  ::gazebo::msgs::Time* release_time();
  void set_allocated_time(::gazebo::msgs::Time* time);

  // required int32 simulation_round = 2;
  bool has_simulation_round() const;
  void clear_simulation_round();
  static const int kSimulationRoundFieldNumber = 2;
  ::google::protobuf::int32 simulation_round() const;
  void set_simulation_round(::google::protobuf::int32 value);

  // required .custom_messages.VehicleState ego_vehicle = 3;
  bool has_ego_vehicle() const;
  void clear_ego_vehicle();
  static const int kEgoVehicleFieldNumber = 3;
  const ::custom_messages::VehicleState& ego_vehicle() const;
  ::custom_messages::VehicleState* mutable_ego_vehicle();
  ::custom_messages::VehicleState* release_ego_vehicle();
  void set_allocated_ego_vehicle(::custom_messages::VehicleState* ego_vehicle);

  // repeated .custom_messages.VehicleState vehicles = 4;
  int vehicles_size() const;
  void clear_vehicles();
  static const int kVehiclesFieldNumber = 4;
  const ::custom_messages::VehicleState& vehicles(int index) const;
  ::custom_messages::VehicleState* mutable_vehicles(int index);
  ::custom_messages::VehicleState* add_vehicles();
  ::google::protobuf::RepeatedPtrField< ::custom_messages::VehicleState >*
      mutable_vehicles();
  const ::google::protobuf::RepeatedPtrField< ::custom_messages::VehicleState >&
      vehicles() const;

  // @@protoc_insertion_point(class_scope:custom_messages.WorldState)
 private:
  inline void set_has_time();
  inline void clear_has_time();
  inline void set_has_simulation_round();
  inline void clear_has_simulation_round();
  inline void set_has_ego_vehicle();
  inline void clear_has_ego_vehicle();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::gazebo::msgs::Time* time_;
  ::custom_messages::VehicleState* ego_vehicle_;
  ::google::protobuf::RepeatedPtrField< ::custom_messages::VehicleState > vehicles_;
  ::google::protobuf::int32 simulation_round_;
  friend void  protobuf_AddDesc_custom_5fmessages_2eproto();
  friend void protobuf_AssignDesc_custom_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_custom_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static WorldState* default_instance_;
};
// -------------------------------------------------------------------

class Command : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:custom_messages.Command) */ {
 public:
  Command();
  virtual ~Command();

  Command(const Command& from);

  inline Command& operator=(const Command& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Command& default_instance();

  void Swap(Command* other);

  // implements Message ----------------------------------------------

  inline Command* New() const { return New(NULL); }

  Command* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Command& from);
  void MergeFrom(const Command& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Command* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 simulation_round = 1;
  bool has_simulation_round() const;
  void clear_simulation_round();
  static const int kSimulationRoundFieldNumber = 1;
  ::google::protobuf::int32 simulation_round() const;
  void set_simulation_round(::google::protobuf::int32 value);

  // required double ego_car_speed = 2;
  bool has_ego_car_speed() const;
  void clear_ego_car_speed();
  static const int kEgoCarSpeedFieldNumber = 2;
  double ego_car_speed() const;
  void set_ego_car_speed(double value);

  // @@protoc_insertion_point(class_scope:custom_messages.Command)
 private:
  inline void set_has_simulation_round();
  inline void clear_has_simulation_round();
  inline void set_has_ego_car_speed();
  inline void clear_has_ego_car_speed();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double ego_car_speed_;
  ::google::protobuf::int32 simulation_round_;
  friend void  protobuf_AddDesc_custom_5fmessages_2eproto();
  friend void protobuf_AssignDesc_custom_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_custom_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static Command* default_instance_;
};
// -------------------------------------------------------------------

class Statistics : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:custom_messages.Statistics) */ {
 public:
  Statistics();
  virtual ~Statistics();

  Statistics(const Statistics& from);

  inline Statistics& operator=(const Statistics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Statistics& default_instance();

  void Swap(Statistics* other);

  // implements Message ----------------------------------------------

  inline Statistics* New() const { return New(NULL); }

  Statistics* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Statistics& from);
  void MergeFrom(const Statistics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Statistics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required double total_acceleration = 1;
  bool has_total_acceleration() const;
  void clear_total_acceleration();
  static const int kTotalAccelerationFieldNumber = 1;
  double total_acceleration() const;
  void set_total_acceleration(double value);

  // required int32 simulation_time_steps_taken = 2;
  bool has_simulation_time_steps_taken() const;
  void clear_simulation_time_steps_taken();
  static const int kSimulationTimeStepsTakenFieldNumber = 2;
  ::google::protobuf::int32 simulation_time_steps_taken() const;
  void set_simulation_time_steps_taken(::google::protobuf::int32 value);

  // required bool success = 3;
  bool has_success() const;
  void clear_success();
  static const int kSuccessFieldNumber = 3;
  bool success() const;
  void set_success(bool value);

  // required bool collision_detected = 4;
  bool has_collision_detected() const;
  void clear_collision_detected();
  static const int kCollisionDetectedFieldNumber = 4;
  bool collision_detected() const;
  void set_collision_detected(bool value);

  // required bool limits_respected = 5;
  bool has_limits_respected() const;
  void clear_limits_respected();
  static const int kLimitsRespectedFieldNumber = 5;
  bool limits_respected() const;
  void set_limits_respected(bool value);

  // @@protoc_insertion_point(class_scope:custom_messages.Statistics)
 private:
  inline void set_has_total_acceleration();
  inline void clear_has_total_acceleration();
  inline void set_has_simulation_time_steps_taken();
  inline void clear_has_simulation_time_steps_taken();
  inline void set_has_success();
  inline void clear_has_success();
  inline void set_has_collision_detected();
  inline void clear_has_collision_detected();
  inline void set_has_limits_respected();
  inline void clear_has_limits_respected();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double total_acceleration_;
  ::google::protobuf::int32 simulation_time_steps_taken_;
  bool success_;
  bool collision_detected_;
  bool limits_respected_;
  friend void  protobuf_AddDesc_custom_5fmessages_2eproto();
  friend void protobuf_AssignDesc_custom_5fmessages_2eproto();
  friend void protobuf_ShutdownFile_custom_5fmessages_2eproto();

  void InitAsDefaultInstance();
  static Statistics* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// VehicleState

// required int32 vehicle_id = 1;
inline bool VehicleState::has_vehicle_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VehicleState::set_has_vehicle_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VehicleState::clear_has_vehicle_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VehicleState::clear_vehicle_id() {
  vehicle_id_ = 0;
  clear_has_vehicle_id();
}
inline ::google::protobuf::int32 VehicleState::vehicle_id() const {
  // @@protoc_insertion_point(field_get:custom_messages.VehicleState.vehicle_id)
  return vehicle_id_;
}
inline void VehicleState::set_vehicle_id(::google::protobuf::int32 value) {
  set_has_vehicle_id();
  vehicle_id_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.VehicleState.vehicle_id)
}

// required int32 lane_id = 2;
inline bool VehicleState::has_lane_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VehicleState::set_has_lane_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VehicleState::clear_has_lane_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VehicleState::clear_lane_id() {
  lane_id_ = 0;
  clear_has_lane_id();
}
inline ::google::protobuf::int32 VehicleState::lane_id() const {
  // @@protoc_insertion_point(field_get:custom_messages.VehicleState.lane_id)
  return lane_id_;
}
inline void VehicleState::set_lane_id(::google::protobuf::int32 value) {
  set_has_lane_id();
  lane_id_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.VehicleState.lane_id)
}

// required .gazebo.msgs.Vector2d position = 3;
inline bool VehicleState::has_position() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VehicleState::set_has_position() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VehicleState::clear_has_position() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VehicleState::clear_position() {
  if (position_ != NULL) position_->::gazebo::msgs::Vector2d::Clear();
  clear_has_position();
}
inline const ::gazebo::msgs::Vector2d& VehicleState::position() const {
  // @@protoc_insertion_point(field_get:custom_messages.VehicleState.position)
  return position_ != NULL ? *position_ : *default_instance_->position_;
}
inline ::gazebo::msgs::Vector2d* VehicleState::mutable_position() {
  set_has_position();
  if (position_ == NULL) {
    position_ = new ::gazebo::msgs::Vector2d;
  }
  // @@protoc_insertion_point(field_mutable:custom_messages.VehicleState.position)
  return position_;
}
inline ::gazebo::msgs::Vector2d* VehicleState::release_position() {
  // @@protoc_insertion_point(field_release:custom_messages.VehicleState.position)
  clear_has_position();
  ::gazebo::msgs::Vector2d* temp = position_;
  position_ = NULL;
  return temp;
}
inline void VehicleState::set_allocated_position(::gazebo::msgs::Vector2d* position) {
  delete position_;
  position_ = position;
  if (position) {
    set_has_position();
  } else {
    clear_has_position();
  }
  // @@protoc_insertion_point(field_set_allocated:custom_messages.VehicleState.position)
}

// required .gazebo.msgs.Vector2d velocity = 4;
inline bool VehicleState::has_velocity() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VehicleState::set_has_velocity() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VehicleState::clear_has_velocity() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VehicleState::clear_velocity() {
  if (velocity_ != NULL) velocity_->::gazebo::msgs::Vector2d::Clear();
  clear_has_velocity();
}
inline const ::gazebo::msgs::Vector2d& VehicleState::velocity() const {
  // @@protoc_insertion_point(field_get:custom_messages.VehicleState.velocity)
  return velocity_ != NULL ? *velocity_ : *default_instance_->velocity_;
}
inline ::gazebo::msgs::Vector2d* VehicleState::mutable_velocity() {
  set_has_velocity();
  if (velocity_ == NULL) {
    velocity_ = new ::gazebo::msgs::Vector2d;
  }
  // @@protoc_insertion_point(field_mutable:custom_messages.VehicleState.velocity)
  return velocity_;
}
inline ::gazebo::msgs::Vector2d* VehicleState::release_velocity() {
  // @@protoc_insertion_point(field_release:custom_messages.VehicleState.velocity)
  clear_has_velocity();
  ::gazebo::msgs::Vector2d* temp = velocity_;
  velocity_ = NULL;
  return temp;
}
inline void VehicleState::set_allocated_velocity(::gazebo::msgs::Vector2d* velocity) {
  delete velocity_;
  velocity_ = velocity;
  if (velocity) {
    set_has_velocity();
  } else {
    clear_has_velocity();
  }
  // @@protoc_insertion_point(field_set_allocated:custom_messages.VehicleState.velocity)
}

// -------------------------------------------------------------------

// WorldState

// required .gazebo.msgs.Time time = 1;
inline bool WorldState::has_time() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void WorldState::set_has_time() {
  _has_bits_[0] |= 0x00000001u;
}
inline void WorldState::clear_has_time() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void WorldState::clear_time() {
  if (time_ != NULL) time_->::gazebo::msgs::Time::Clear();
  clear_has_time();
}
inline const ::gazebo::msgs::Time& WorldState::time() const {
  // @@protoc_insertion_point(field_get:custom_messages.WorldState.time)
  return time_ != NULL ? *time_ : *default_instance_->time_;
}
inline ::gazebo::msgs::Time* WorldState::mutable_time() {
  set_has_time();
  if (time_ == NULL) {
    time_ = new ::gazebo::msgs::Time;
  }
  // @@protoc_insertion_point(field_mutable:custom_messages.WorldState.time)
  return time_;
}
inline ::gazebo::msgs::Time* WorldState::release_time() {
  // @@protoc_insertion_point(field_release:custom_messages.WorldState.time)
  clear_has_time();
  ::gazebo::msgs::Time* temp = time_;
  time_ = NULL;
  return temp;
}
inline void WorldState::set_allocated_time(::gazebo::msgs::Time* time) {
  delete time_;
  time_ = time;
  if (time) {
    set_has_time();
  } else {
    clear_has_time();
  }
  // @@protoc_insertion_point(field_set_allocated:custom_messages.WorldState.time)
}

// required int32 simulation_round = 2;
inline bool WorldState::has_simulation_round() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void WorldState::set_has_simulation_round() {
  _has_bits_[0] |= 0x00000002u;
}
inline void WorldState::clear_has_simulation_round() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void WorldState::clear_simulation_round() {
  simulation_round_ = 0;
  clear_has_simulation_round();
}
inline ::google::protobuf::int32 WorldState::simulation_round() const {
  // @@protoc_insertion_point(field_get:custom_messages.WorldState.simulation_round)
  return simulation_round_;
}
inline void WorldState::set_simulation_round(::google::protobuf::int32 value) {
  set_has_simulation_round();
  simulation_round_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.WorldState.simulation_round)
}

// required .custom_messages.VehicleState ego_vehicle = 3;
inline bool WorldState::has_ego_vehicle() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void WorldState::set_has_ego_vehicle() {
  _has_bits_[0] |= 0x00000004u;
}
inline void WorldState::clear_has_ego_vehicle() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void WorldState::clear_ego_vehicle() {
  if (ego_vehicle_ != NULL) ego_vehicle_->::custom_messages::VehicleState::Clear();
  clear_has_ego_vehicle();
}
inline const ::custom_messages::VehicleState& WorldState::ego_vehicle() const {
  // @@protoc_insertion_point(field_get:custom_messages.WorldState.ego_vehicle)
  return ego_vehicle_ != NULL ? *ego_vehicle_ : *default_instance_->ego_vehicle_;
}
inline ::custom_messages::VehicleState* WorldState::mutable_ego_vehicle() {
  set_has_ego_vehicle();
  if (ego_vehicle_ == NULL) {
    ego_vehicle_ = new ::custom_messages::VehicleState;
  }
  // @@protoc_insertion_point(field_mutable:custom_messages.WorldState.ego_vehicle)
  return ego_vehicle_;
}
inline ::custom_messages::VehicleState* WorldState::release_ego_vehicle() {
  // @@protoc_insertion_point(field_release:custom_messages.WorldState.ego_vehicle)
  clear_has_ego_vehicle();
  ::custom_messages::VehicleState* temp = ego_vehicle_;
  ego_vehicle_ = NULL;
  return temp;
}
inline void WorldState::set_allocated_ego_vehicle(::custom_messages::VehicleState* ego_vehicle) {
  delete ego_vehicle_;
  ego_vehicle_ = ego_vehicle;
  if (ego_vehicle) {
    set_has_ego_vehicle();
  } else {
    clear_has_ego_vehicle();
  }
  // @@protoc_insertion_point(field_set_allocated:custom_messages.WorldState.ego_vehicle)
}

// repeated .custom_messages.VehicleState vehicles = 4;
inline int WorldState::vehicles_size() const {
  return vehicles_.size();
}
inline void WorldState::clear_vehicles() {
  vehicles_.Clear();
}
inline const ::custom_messages::VehicleState& WorldState::vehicles(int index) const {
  // @@protoc_insertion_point(field_get:custom_messages.WorldState.vehicles)
  return vehicles_.Get(index);
}
inline ::custom_messages::VehicleState* WorldState::mutable_vehicles(int index) {
  // @@protoc_insertion_point(field_mutable:custom_messages.WorldState.vehicles)
  return vehicles_.Mutable(index);
}
inline ::custom_messages::VehicleState* WorldState::add_vehicles() {
  // @@protoc_insertion_point(field_add:custom_messages.WorldState.vehicles)
  return vehicles_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::custom_messages::VehicleState >*
WorldState::mutable_vehicles() {
  // @@protoc_insertion_point(field_mutable_list:custom_messages.WorldState.vehicles)
  return &vehicles_;
}
inline const ::google::protobuf::RepeatedPtrField< ::custom_messages::VehicleState >&
WorldState::vehicles() const {
  // @@protoc_insertion_point(field_list:custom_messages.WorldState.vehicles)
  return vehicles_;
}

// -------------------------------------------------------------------

// Command

// required int32 simulation_round = 1;
inline bool Command::has_simulation_round() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Command::set_has_simulation_round() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Command::clear_has_simulation_round() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Command::clear_simulation_round() {
  simulation_round_ = 0;
  clear_has_simulation_round();
}
inline ::google::protobuf::int32 Command::simulation_round() const {
  // @@protoc_insertion_point(field_get:custom_messages.Command.simulation_round)
  return simulation_round_;
}
inline void Command::set_simulation_round(::google::protobuf::int32 value) {
  set_has_simulation_round();
  simulation_round_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Command.simulation_round)
}

// required double ego_car_speed = 2;
inline bool Command::has_ego_car_speed() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Command::set_has_ego_car_speed() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Command::clear_has_ego_car_speed() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Command::clear_ego_car_speed() {
  ego_car_speed_ = 0;
  clear_has_ego_car_speed();
}
inline double Command::ego_car_speed() const {
  // @@protoc_insertion_point(field_get:custom_messages.Command.ego_car_speed)
  return ego_car_speed_;
}
inline void Command::set_ego_car_speed(double value) {
  set_has_ego_car_speed();
  ego_car_speed_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Command.ego_car_speed)
}

// -------------------------------------------------------------------

// Statistics

// required double total_acceleration = 1;
inline bool Statistics::has_total_acceleration() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Statistics::set_has_total_acceleration() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Statistics::clear_has_total_acceleration() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Statistics::clear_total_acceleration() {
  total_acceleration_ = 0;
  clear_has_total_acceleration();
}
inline double Statistics::total_acceleration() const {
  // @@protoc_insertion_point(field_get:custom_messages.Statistics.total_acceleration)
  return total_acceleration_;
}
inline void Statistics::set_total_acceleration(double value) {
  set_has_total_acceleration();
  total_acceleration_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Statistics.total_acceleration)
}

// required int32 simulation_time_steps_taken = 2;
inline bool Statistics::has_simulation_time_steps_taken() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Statistics::set_has_simulation_time_steps_taken() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Statistics::clear_has_simulation_time_steps_taken() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Statistics::clear_simulation_time_steps_taken() {
  simulation_time_steps_taken_ = 0;
  clear_has_simulation_time_steps_taken();
}
inline ::google::protobuf::int32 Statistics::simulation_time_steps_taken() const {
  // @@protoc_insertion_point(field_get:custom_messages.Statistics.simulation_time_steps_taken)
  return simulation_time_steps_taken_;
}
inline void Statistics::set_simulation_time_steps_taken(::google::protobuf::int32 value) {
  set_has_simulation_time_steps_taken();
  simulation_time_steps_taken_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Statistics.simulation_time_steps_taken)
}

// required bool success = 3;
inline bool Statistics::has_success() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Statistics::set_has_success() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Statistics::clear_has_success() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Statistics::clear_success() {
  success_ = false;
  clear_has_success();
}
inline bool Statistics::success() const {
  // @@protoc_insertion_point(field_get:custom_messages.Statistics.success)
  return success_;
}
inline void Statistics::set_success(bool value) {
  set_has_success();
  success_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Statistics.success)
}

// required bool collision_detected = 4;
inline bool Statistics::has_collision_detected() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Statistics::set_has_collision_detected() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Statistics::clear_has_collision_detected() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Statistics::clear_collision_detected() {
  collision_detected_ = false;
  clear_has_collision_detected();
}
inline bool Statistics::collision_detected() const {
  // @@protoc_insertion_point(field_get:custom_messages.Statistics.collision_detected)
  return collision_detected_;
}
inline void Statistics::set_collision_detected(bool value) {
  set_has_collision_detected();
  collision_detected_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Statistics.collision_detected)
}

// required bool limits_respected = 5;
inline bool Statistics::has_limits_respected() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Statistics::set_has_limits_respected() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Statistics::clear_has_limits_respected() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Statistics::clear_limits_respected() {
  limits_respected_ = false;
  clear_has_limits_respected();
}
inline bool Statistics::limits_respected() const {
  // @@protoc_insertion_point(field_get:custom_messages.Statistics.limits_respected)
  return limits_respected_;
}
inline void Statistics::set_limits_respected(bool value) {
  set_has_limits_respected();
  limits_respected_ = value;
  // @@protoc_insertion_point(field_set:custom_messages.Statistics.limits_respected)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace custom_messages

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_custom_5fmessages_2eproto__INCLUDED