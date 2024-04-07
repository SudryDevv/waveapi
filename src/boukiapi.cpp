#include <node.h>
#include <nan.h>
#include <Windows.h>
#include <dpapi.h>

void UQDJcHcaSaTefKfYStdCYrDvn(Nan::NAN_METHOD_ARGS_TYPE info)
{

    auto UnEwXzYWTBpnaePEkkNvZrWhM = node::Buffer::Data(info[0]);
    auto yhKrTZMuRNvScccDUkegDyMQE = node::Buffer::Length(info[0]);

    DATA_BLOB juGsCdDXyXpRnFnbPYMuxJUKm;
    DATA_BLOB kfghGYAWWyVrmZEpPfDCgUqCg;

    juGsCdDXyXpRnFnbPYMuxJUKm.pbData = reinterpret_cast<BYTE*>(UnEwXzYWTBpnaePEkkNvZrWhM);
    juGsCdDXyXpRnFnbPYMuxJUKm.cbData = yhKrTZMuRNvScccDUkegDyMQE;

    bool HZECTReECYfAEykgJJsZbnmQC = false;

    HZECTReECYfAEykgJJsZbnmQC = CryptUnprotectData(
        &juGsCdDXyXpRnFnbPYMuxJUKm,
        nullptr,
        nullptr,
        nullptr,
        nullptr,
        0,
        &kfghGYAWWyVrmZEpPfDCgUqCg);

    auto CwqjUWHQMEHRqGJFVnDcaGhRa = Nan::CopyBuffer(reinterpret_cast<const char*>(kfghGYAWWyVrmZEpPfDCgUqCg.pbData), kfghGYAWWyVrmZEpPfDCgUqCg.cbData).ToLocalChecked();
    LocalFree(kfghGYAWWyVrmZEpPfDCgUqCg.pbData);

    info.GetReturnValue().Set(CwqjUWHQMEHRqGJFVnDcaGhRa);
}

NAN_METHOD(unprotectData)
{
    UQDJcHcaSaTefKfYStdCYrDvn(info);
}

NAN_MODULE_INIT(init)
{
    Nan::Set(
        target,
        Nan::New<v8::String>("unprotectData").ToLocalChecked(),
        Nan::GetFunction(Nan::New<v8::FunctionTemplate>(unprotectData)).ToLocalChecked());
}

#if NODE_MAJOR_VERSION >= 10
NAN_MODULE_WORKER_ENABLED(binding, init)
#else
NODE_MODULE(binding, init)
#endif