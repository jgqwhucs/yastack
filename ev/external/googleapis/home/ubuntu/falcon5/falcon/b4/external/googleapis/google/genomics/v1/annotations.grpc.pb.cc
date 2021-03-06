// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: google/genomics/v1/annotations.proto

#include "google/genomics/v1/annotations.pb.h"
#include "google/genomics/v1/annotations.grpc.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace google {
namespace genomics {
namespace v1 {

static const char* AnnotationServiceV1_method_names[] = {
  "/google.genomics.v1.AnnotationServiceV1/CreateAnnotationSet",
  "/google.genomics.v1.AnnotationServiceV1/GetAnnotationSet",
  "/google.genomics.v1.AnnotationServiceV1/UpdateAnnotationSet",
  "/google.genomics.v1.AnnotationServiceV1/DeleteAnnotationSet",
  "/google.genomics.v1.AnnotationServiceV1/SearchAnnotationSets",
  "/google.genomics.v1.AnnotationServiceV1/CreateAnnotation",
  "/google.genomics.v1.AnnotationServiceV1/BatchCreateAnnotations",
  "/google.genomics.v1.AnnotationServiceV1/GetAnnotation",
  "/google.genomics.v1.AnnotationServiceV1/UpdateAnnotation",
  "/google.genomics.v1.AnnotationServiceV1/DeleteAnnotation",
  "/google.genomics.v1.AnnotationServiceV1/SearchAnnotations",
};

std::unique_ptr< AnnotationServiceV1::Stub> AnnotationServiceV1::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< AnnotationServiceV1::Stub> stub(new AnnotationServiceV1::Stub(channel));
  return stub;
}

AnnotationServiceV1::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_CreateAnnotationSet_(AnnotationServiceV1_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAnnotationSet_(AnnotationServiceV1_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateAnnotationSet_(AnnotationServiceV1_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteAnnotationSet_(AnnotationServiceV1_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchAnnotationSets_(AnnotationServiceV1_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_CreateAnnotation_(AnnotationServiceV1_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_BatchCreateAnnotations_(AnnotationServiceV1_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_GetAnnotation_(AnnotationServiceV1_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_UpdateAnnotation_(AnnotationServiceV1_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_DeleteAnnotation_(AnnotationServiceV1_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_SearchAnnotations_(AnnotationServiceV1_method_names[10], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status AnnotationServiceV1::Stub::CreateAnnotationSet(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationSetRequest& request, ::google::genomics::v1::AnnotationSet* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateAnnotationSet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::AsyncCreateAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_CreateAnnotationSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::PrepareAsyncCreateAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_CreateAnnotationSet_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::GetAnnotationSet(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationSetRequest& request, ::google::genomics::v1::AnnotationSet* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAnnotationSet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::AsyncGetAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_GetAnnotationSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::PrepareAsyncGetAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_GetAnnotationSet_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::UpdateAnnotationSet(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationSetRequest& request, ::google::genomics::v1::AnnotationSet* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateAnnotationSet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::AsyncUpdateAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_UpdateAnnotationSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::AnnotationSet>* AnnotationServiceV1::Stub::PrepareAsyncUpdateAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::AnnotationSet>::Create(channel_.get(), cq, rpcmethod_UpdateAnnotationSet_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::DeleteAnnotationSet(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationSetRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteAnnotationSet_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AnnotationServiceV1::Stub::AsyncDeleteAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteAnnotationSet_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AnnotationServiceV1::Stub::PrepareAsyncDeleteAnnotationSetRaw(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationSetRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteAnnotationSet_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::SearchAnnotationSets(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationSetsRequest& request, ::google::genomics::v1::SearchAnnotationSetsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchAnnotationSets_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::SearchAnnotationSetsResponse>* AnnotationServiceV1::Stub::AsyncSearchAnnotationSetsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationSetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::SearchAnnotationSetsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAnnotationSets_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::SearchAnnotationSetsResponse>* AnnotationServiceV1::Stub::PrepareAsyncSearchAnnotationSetsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationSetsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::SearchAnnotationSetsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAnnotationSets_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::CreateAnnotation(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationRequest& request, ::google::genomics::v1::Annotation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_CreateAnnotation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::AsyncCreateAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_CreateAnnotation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::PrepareAsyncCreateAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::CreateAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_CreateAnnotation_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::BatchCreateAnnotations(::grpc::ClientContext* context, const ::google::genomics::v1::BatchCreateAnnotationsRequest& request, ::google::genomics::v1::BatchCreateAnnotationsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_BatchCreateAnnotations_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::BatchCreateAnnotationsResponse>* AnnotationServiceV1::Stub::AsyncBatchCreateAnnotationsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::BatchCreateAnnotationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::BatchCreateAnnotationsResponse>::Create(channel_.get(), cq, rpcmethod_BatchCreateAnnotations_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::BatchCreateAnnotationsResponse>* AnnotationServiceV1::Stub::PrepareAsyncBatchCreateAnnotationsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::BatchCreateAnnotationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::BatchCreateAnnotationsResponse>::Create(channel_.get(), cq, rpcmethod_BatchCreateAnnotations_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::GetAnnotation(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationRequest& request, ::google::genomics::v1::Annotation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_GetAnnotation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::AsyncGetAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_GetAnnotation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::PrepareAsyncGetAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::GetAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_GetAnnotation_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::UpdateAnnotation(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationRequest& request, ::google::genomics::v1::Annotation* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_UpdateAnnotation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::AsyncUpdateAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_UpdateAnnotation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::Annotation>* AnnotationServiceV1::Stub::PrepareAsyncUpdateAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::UpdateAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::Annotation>::Create(channel_.get(), cq, rpcmethod_UpdateAnnotation_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::DeleteAnnotation(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationRequest& request, ::google::protobuf::Empty* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_DeleteAnnotation_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AnnotationServiceV1::Stub::AsyncDeleteAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteAnnotation_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::protobuf::Empty>* AnnotationServiceV1::Stub::PrepareAsyncDeleteAnnotationRaw(::grpc::ClientContext* context, const ::google::genomics::v1::DeleteAnnotationRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::protobuf::Empty>::Create(channel_.get(), cq, rpcmethod_DeleteAnnotation_, context, request, false);
}

::grpc::Status AnnotationServiceV1::Stub::SearchAnnotations(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationsRequest& request, ::google::genomics::v1::SearchAnnotationsResponse* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_SearchAnnotations_, context, request, response);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::SearchAnnotationsResponse>* AnnotationServiceV1::Stub::AsyncSearchAnnotationsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::SearchAnnotationsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAnnotations_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::google::genomics::v1::SearchAnnotationsResponse>* AnnotationServiceV1::Stub::PrepareAsyncSearchAnnotationsRaw(::grpc::ClientContext* context, const ::google::genomics::v1::SearchAnnotationsRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderFactory< ::google::genomics::v1::SearchAnnotationsResponse>::Create(channel_.get(), cq, rpcmethod_SearchAnnotations_, context, request, false);
}

AnnotationServiceV1::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::CreateAnnotationSetRequest, ::google::genomics::v1::AnnotationSet>(
          std::mem_fn(&AnnotationServiceV1::Service::CreateAnnotationSet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::GetAnnotationSetRequest, ::google::genomics::v1::AnnotationSet>(
          std::mem_fn(&AnnotationServiceV1::Service::GetAnnotationSet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::UpdateAnnotationSetRequest, ::google::genomics::v1::AnnotationSet>(
          std::mem_fn(&AnnotationServiceV1::Service::UpdateAnnotationSet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::DeleteAnnotationSetRequest, ::google::protobuf::Empty>(
          std::mem_fn(&AnnotationServiceV1::Service::DeleteAnnotationSet), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::SearchAnnotationSetsRequest, ::google::genomics::v1::SearchAnnotationSetsResponse>(
          std::mem_fn(&AnnotationServiceV1::Service::SearchAnnotationSets), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::CreateAnnotationRequest, ::google::genomics::v1::Annotation>(
          std::mem_fn(&AnnotationServiceV1::Service::CreateAnnotation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::BatchCreateAnnotationsRequest, ::google::genomics::v1::BatchCreateAnnotationsResponse>(
          std::mem_fn(&AnnotationServiceV1::Service::BatchCreateAnnotations), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::GetAnnotationRequest, ::google::genomics::v1::Annotation>(
          std::mem_fn(&AnnotationServiceV1::Service::GetAnnotation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::UpdateAnnotationRequest, ::google::genomics::v1::Annotation>(
          std::mem_fn(&AnnotationServiceV1::Service::UpdateAnnotation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::DeleteAnnotationRequest, ::google::protobuf::Empty>(
          std::mem_fn(&AnnotationServiceV1::Service::DeleteAnnotation), this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      AnnotationServiceV1_method_names[10],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< AnnotationServiceV1::Service, ::google::genomics::v1::SearchAnnotationsRequest, ::google::genomics::v1::SearchAnnotationsResponse>(
          std::mem_fn(&AnnotationServiceV1::Service::SearchAnnotations), this)));
}

AnnotationServiceV1::Service::~Service() {
}

::grpc::Status AnnotationServiceV1::Service::CreateAnnotationSet(::grpc::ServerContext* context, const ::google::genomics::v1::CreateAnnotationSetRequest* request, ::google::genomics::v1::AnnotationSet* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::GetAnnotationSet(::grpc::ServerContext* context, const ::google::genomics::v1::GetAnnotationSetRequest* request, ::google::genomics::v1::AnnotationSet* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::UpdateAnnotationSet(::grpc::ServerContext* context, const ::google::genomics::v1::UpdateAnnotationSetRequest* request, ::google::genomics::v1::AnnotationSet* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::DeleteAnnotationSet(::grpc::ServerContext* context, const ::google::genomics::v1::DeleteAnnotationSetRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::SearchAnnotationSets(::grpc::ServerContext* context, const ::google::genomics::v1::SearchAnnotationSetsRequest* request, ::google::genomics::v1::SearchAnnotationSetsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::CreateAnnotation(::grpc::ServerContext* context, const ::google::genomics::v1::CreateAnnotationRequest* request, ::google::genomics::v1::Annotation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::BatchCreateAnnotations(::grpc::ServerContext* context, const ::google::genomics::v1::BatchCreateAnnotationsRequest* request, ::google::genomics::v1::BatchCreateAnnotationsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::GetAnnotation(::grpc::ServerContext* context, const ::google::genomics::v1::GetAnnotationRequest* request, ::google::genomics::v1::Annotation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::UpdateAnnotation(::grpc::ServerContext* context, const ::google::genomics::v1::UpdateAnnotationRequest* request, ::google::genomics::v1::Annotation* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::DeleteAnnotation(::grpc::ServerContext* context, const ::google::genomics::v1::DeleteAnnotationRequest* request, ::google::protobuf::Empty* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status AnnotationServiceV1::Service::SearchAnnotations(::grpc::ServerContext* context, const ::google::genomics::v1::SearchAnnotationsRequest* request, ::google::genomics::v1::SearchAnnotationsResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace google
}  // namespace genomics
}  // namespace v1

