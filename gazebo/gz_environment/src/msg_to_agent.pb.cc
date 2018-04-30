// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: msg_to_agent.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "gz_environment/msg_to_agent.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* MsgToAgent_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MsgToAgent_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_msg_5fto_5fagent_2eproto() {
  protobuf_AddDesc_msg_5fto_5fagent_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "msg_to_agent.proto");
  GOOGLE_CHECK(file != NULL);
  MsgToAgent_descriptor_ = file->message_type(0);
  static const int MsgToAgent_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, observation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, reward_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, done_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, info_),
  };
  MsgToAgent_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MsgToAgent_descriptor_,
      MsgToAgent::default_instance_,
      MsgToAgent_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MsgToAgent, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MsgToAgent));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_msg_5fto_5fagent_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MsgToAgent_descriptor_, &MsgToAgent::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_msg_5fto_5fagent_2eproto() {
  delete MsgToAgent::default_instance_;
  delete MsgToAgent_reflection_;
}

void protobuf_AddDesc_msg_5fto_5fagent_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022msg_to_agent.proto\"Q\n\nMsgToAgent\022\027\n\013ob"
    "servation\030\001 \003(\002B\002\020\001\022\016\n\006reward\030\002 \002(\002\022\014\n\004d"
    "one\030\003 \002(\010\022\014\n\004info\030\004 \002(\t", 103);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "msg_to_agent.proto", &protobuf_RegisterTypes);
  MsgToAgent::default_instance_ = new MsgToAgent();
  MsgToAgent::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_msg_5fto_5fagent_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_msg_5fto_5fagent_2eproto {
  StaticDescriptorInitializer_msg_5fto_5fagent_2eproto() {
    protobuf_AddDesc_msg_5fto_5fagent_2eproto();
  }
} static_descriptor_initializer_msg_5fto_5fagent_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MsgToAgent::kObservationFieldNumber;
const int MsgToAgent::kRewardFieldNumber;
const int MsgToAgent::kDoneFieldNumber;
const int MsgToAgent::kInfoFieldNumber;
#endif  // !_MSC_VER

MsgToAgent::MsgToAgent()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MsgToAgent)
}

void MsgToAgent::InitAsDefaultInstance() {
}

MsgToAgent::MsgToAgent(const MsgToAgent& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MsgToAgent)
}

void MsgToAgent::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  reward_ = 0;
  done_ = false;
  info_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MsgToAgent::~MsgToAgent() {
  // @@protoc_insertion_point(destructor:MsgToAgent)
  SharedDtor();
}

void MsgToAgent::SharedDtor() {
  if (info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete info_;
  }
  if (this != default_instance_) {
  }
}

void MsgToAgent::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MsgToAgent::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MsgToAgent_descriptor_;
}

const MsgToAgent& MsgToAgent::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_msg_5fto_5fagent_2eproto();
  return *default_instance_;
}

MsgToAgent* MsgToAgent::default_instance_ = NULL;

MsgToAgent* MsgToAgent::New() const {
  return new MsgToAgent;
}

void MsgToAgent::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MsgToAgent*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 14) {
    ZR_(reward_, done_);
    if (has_info()) {
      if (info_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        info_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  observation_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MsgToAgent::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MsgToAgent)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated float observation = 1 [packed = true];
      case 1: {
        if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, this->mutable_observation())));
        } else if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 1, 10, input, this->mutable_observation())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_reward;
        break;
      }

      // required float reward = 2;
      case 2: {
        if (tag == 21) {
         parse_reward:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &reward_)));
          set_has_reward();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_done;
        break;
      }

      // required bool done = 3;
      case 3: {
        if (tag == 24) {
         parse_done:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &done_)));
          set_has_done();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_info;
        break;
      }

      // required string info = 4;
      case 4: {
        if (tag == 34) {
         parse_info:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_info()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->info().data(), this->info().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "info");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MsgToAgent)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MsgToAgent)
  return false;
#undef DO_
}

void MsgToAgent::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MsgToAgent)
  // repeated float observation = 1 [packed = true];
  if (this->observation_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(1, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_observation_cached_byte_size_);
  }
  for (int i = 0; i < this->observation_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteFloatNoTag(
      this->observation(i), output);
  }

  // required float reward = 2;
  if (has_reward()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->reward(), output);
  }

  // required bool done = 3;
  if (has_done()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->done(), output);
  }

  // required string info = 4;
  if (has_info()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), this->info().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "info");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->info(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MsgToAgent)
}

::google::protobuf::uint8* MsgToAgent::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MsgToAgent)
  // repeated float observation = 1 [packed = true];
  if (this->observation_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      1,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _observation_cached_byte_size_, target);
  }
  for (int i = 0; i < this->observation_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteFloatNoTagToArray(this->observation(i), target);
  }

  // required float reward = 2;
  if (has_reward()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->reward(), target);
  }

  // required bool done = 3;
  if (has_done()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(3, this->done(), target);
  }

  // required string info = 4;
  if (has_info()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->info().data(), this->info().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "info");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->info(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MsgToAgent)
  return target;
}

int MsgToAgent::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    // required float reward = 2;
    if (has_reward()) {
      total_size += 1 + 4;
    }

    // required bool done = 3;
    if (has_done()) {
      total_size += 1 + 1;
    }

    // required string info = 4;
    if (has_info()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->info());
    }

  }
  // repeated float observation = 1 [packed = true];
  {
    int data_size = 0;
    data_size = 4 * this->observation_size();
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _observation_cached_byte_size_ = data_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MsgToAgent::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MsgToAgent* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MsgToAgent*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MsgToAgent::MergeFrom(const MsgToAgent& from) {
  GOOGLE_CHECK_NE(&from, this);
  observation_.MergeFrom(from.observation_);
  if (from._has_bits_[1 / 32] & (0xffu << (1 % 32))) {
    if (from.has_reward()) {
      set_reward(from.reward());
    }
    if (from.has_done()) {
      set_done(from.done());
    }
    if (from.has_info()) {
      set_info(from.info());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MsgToAgent::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MsgToAgent::CopyFrom(const MsgToAgent& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MsgToAgent::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000e) != 0x0000000e) return false;

  return true;
}

void MsgToAgent::Swap(MsgToAgent* other) {
  if (other != this) {
    observation_.Swap(&other->observation_);
    std::swap(reward_, other->reward_);
    std::swap(done_, other->done_);
    std::swap(info_, other->info_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MsgToAgent::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MsgToAgent_descriptor_;
  metadata.reflection = MsgToAgent_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)