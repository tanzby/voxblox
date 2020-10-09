// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Block.proto

#ifndef PROTOBUF_Block_2eproto__INCLUDED
#define PROTOBUF_Block_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace voxblox {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Block_2eproto();
void protobuf_AssignDesc_Block_2eproto();
void protobuf_ShutdownFile_Block_2eproto();

class BlockProto;

// ===================================================================

class BlockProto : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:voxblox.BlockProto) */ {
 public:
  BlockProto();
  virtual ~BlockProto();

  BlockProto(const BlockProto& from);

  inline BlockProto& operator=(const BlockProto& from) {
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
  static const BlockProto& default_instance();

  void Swap(BlockProto* other);

  // implements Message ----------------------------------------------

  inline BlockProto* New() const { return New(NULL); }

  BlockProto* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlockProto& from);
  void MergeFrom(const BlockProto& from);
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
  void InternalSwap(BlockProto* other);
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

  // optional int32 voxels_per_side = 1;
  bool has_voxels_per_side() const;
  void clear_voxels_per_side();
  static const int kVoxelsPerSideFieldNumber = 1;
  ::google::protobuf::int32 voxels_per_side() const;
  void set_voxels_per_side(::google::protobuf::int32 value);

  // optional double voxel_size = 2;
  bool has_voxel_size() const;
  void clear_voxel_size();
  static const int kVoxelSizeFieldNumber = 2;
  double voxel_size() const;
  void set_voxel_size(double value);

  // optional double origin_x = 3;
  bool has_origin_x() const;
  void clear_origin_x();
  static const int kOriginXFieldNumber = 3;
  double origin_x() const;
  void set_origin_x(double value);

  // optional double origin_y = 4;
  bool has_origin_y() const;
  void clear_origin_y();
  static const int kOriginYFieldNumber = 4;
  double origin_y() const;
  void set_origin_y(double value);

  // optional double origin_z = 5;
  bool has_origin_z() const;
  void clear_origin_z();
  static const int kOriginZFieldNumber = 5;
  double origin_z() const;
  void set_origin_z(double value);

  // optional bool has_data = 6;
  bool has_has_data() const;
  void clear_has_data();
  static const int kHasDataFieldNumber = 6;
  bool has_data() const;
  void set_has_data(bool value);

  // repeated uint32 voxel_data = 7;
  int voxel_data_size() const;
  void clear_voxel_data();
  static const int kVoxelDataFieldNumber = 7;
  ::google::protobuf::uint32 voxel_data(int index) const;
  void set_voxel_data(int index, ::google::protobuf::uint32 value);
  void add_voxel_data(::google::protobuf::uint32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
      voxel_data() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
      mutable_voxel_data();

  // @@protoc_insertion_point(class_scope:voxblox.BlockProto)
 private:
  inline void set_has_voxels_per_side();
  inline void clear_has_voxels_per_side();
  inline void set_has_voxel_size();
  inline void clear_has_voxel_size();
  inline void set_has_origin_x();
  inline void clear_has_origin_x();
  inline void set_has_origin_y();
  inline void clear_has_origin_y();
  inline void set_has_origin_z();
  inline void clear_has_origin_z();
  inline void set_has_has_data();
  inline void clear_has_has_data();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double voxel_size_;
  double origin_x_;
  ::google::protobuf::int32 voxels_per_side_;
  bool has_data_;
  double origin_y_;
  double origin_z_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint32 > voxel_data_;
  friend void  protobuf_AddDesc_Block_2eproto();
  friend void protobuf_AssignDesc_Block_2eproto();
  friend void protobuf_ShutdownFile_Block_2eproto();

  void InitAsDefaultInstance();
  static BlockProto* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// BlockProto

// optional int32 voxels_per_side = 1;
inline bool BlockProto::has_voxels_per_side() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BlockProto::set_has_voxels_per_side() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BlockProto::clear_has_voxels_per_side() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BlockProto::clear_voxels_per_side() {
  voxels_per_side_ = 0;
  clear_has_voxels_per_side();
}
inline ::google::protobuf::int32 BlockProto::voxels_per_side() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxels_per_side)
  return voxels_per_side_;
}
inline void BlockProto::set_voxels_per_side(::google::protobuf::int32 value) {
  set_has_voxels_per_side();
  voxels_per_side_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxels_per_side)
}

// optional double voxel_size = 2;
inline bool BlockProto::has_voxel_size() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BlockProto::set_has_voxel_size() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BlockProto::clear_has_voxel_size() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BlockProto::clear_voxel_size() {
  voxel_size_ = 0;
  clear_has_voxel_size();
}
inline double BlockProto::voxel_size() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxel_size)
  return voxel_size_;
}
inline void BlockProto::set_voxel_size(double value) {
  set_has_voxel_size();
  voxel_size_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxel_size)
}

// optional double origin_x = 3;
inline bool BlockProto::has_origin_x() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BlockProto::set_has_origin_x() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BlockProto::clear_has_origin_x() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BlockProto::clear_origin_x() {
  origin_x_ = 0;
  clear_has_origin_x();
}
inline double BlockProto::origin_x() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_x)
  return origin_x_;
}
inline void BlockProto::set_origin_x(double value) {
  set_has_origin_x();
  origin_x_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_x)
}

// optional double origin_y = 4;
inline bool BlockProto::has_origin_y() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BlockProto::set_has_origin_y() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BlockProto::clear_has_origin_y() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BlockProto::clear_origin_y() {
  origin_y_ = 0;
  clear_has_origin_y();
}
inline double BlockProto::origin_y() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_y)
  return origin_y_;
}
inline void BlockProto::set_origin_y(double value) {
  set_has_origin_y();
  origin_y_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_y)
}

// optional double origin_z = 5;
inline bool BlockProto::has_origin_z() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BlockProto::set_has_origin_z() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BlockProto::clear_has_origin_z() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BlockProto::clear_origin_z() {
  origin_z_ = 0;
  clear_has_origin_z();
}
inline double BlockProto::origin_z() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.origin_z)
  return origin_z_;
}
inline void BlockProto::set_origin_z(double value) {
  set_has_origin_z();
  origin_z_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.origin_z)
}

// optional bool has_data = 6;
inline bool BlockProto::has_has_data() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BlockProto::set_has_has_data() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BlockProto::clear_has_has_data() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BlockProto::clear_has_data() {
  has_data_ = false;
  clear_has_has_data();
}
inline bool BlockProto::has_data() const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.has_data)
  return has_data_;
}
inline void BlockProto::set_has_data(bool value) {
  set_has_has_data();
  has_data_ = value;
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.has_data)
}

// repeated uint32 voxel_data = 7;
inline int BlockProto::voxel_data_size() const {
  return voxel_data_.size();
}
inline void BlockProto::clear_voxel_data() {
  voxel_data_.Clear();
}
inline ::google::protobuf::uint32 BlockProto::voxel_data(int index) const {
  // @@protoc_insertion_point(field_get:voxblox.BlockProto.voxel_data)
  return voxel_data_.Get(index);
}
inline void BlockProto::set_voxel_data(int index, ::google::protobuf::uint32 value) {
  voxel_data_.Set(index, value);
  // @@protoc_insertion_point(field_set:voxblox.BlockProto.voxel_data)
}
inline void BlockProto::add_voxel_data(::google::protobuf::uint32 value) {
  voxel_data_.Add(value);
  // @@protoc_insertion_point(field_add:voxblox.BlockProto.voxel_data)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >&
BlockProto::voxel_data() const {
  // @@protoc_insertion_point(field_list:voxblox.BlockProto.voxel_data)
  return voxel_data_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint32 >*
BlockProto::mutable_voxel_data() {
  // @@protoc_insertion_point(field_mutable_list:voxblox.BlockProto.voxel_data)
  return &voxel_data_;
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace voxblox

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Block_2eproto__INCLUDED
