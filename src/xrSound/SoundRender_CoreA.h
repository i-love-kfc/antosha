#pragma once

#include "SoundRender_Core.h"
#include "OpenALDeviceList.h"

#ifdef DEBUG
#define A_CHK(expr)                                                \
    {                                                              \
        alGetError();                                              \
        expr;                                                      \
        ALenum err_ = alGetError();                               \
        VERIFY2(err_ == AL_NO_ERROR, (pcstr)alGetString(err_)); \
    }
#define AC_CHK(expr)                                                          \
    {                                                                         \
        alcGetError(pDevice);                                                 \
        expr;                                                                 \
        ALCenum err_ = alcGetError(pDevice);                                 \
        VERIFY2(err_ == ALC_NO_ERROR, (pcstr)alcGetString(pDevice, err_)); \
    }
#else
#define A_CHK(expr) \
    {               \
        expr;       \
    }
#define AC_CHK(expr) \
    {                \
        expr;        \
    }
#endif

class CSoundRender_CoreA : public CSoundRender_Core
{
    typedef CSoundRender_Core inherited;
    ALCdevice* pDevice;
    ALCcontext* pContext;
    ALDeviceList* pDeviceList;

    struct SListener
    {
        Fvector position;
        Fvector orientation[2];
    };

    SListener Listener;

protected:
    void update_listener(const Fvector& P, const Fvector& D, const Fvector& N, float dt) override;

public:
    CSoundRender_CoreA();
    virtual ~CSoundRender_CoreA();

    void _initialize() override;
    void _clear() override;
    void _restart() override;

    void set_master_volume(float f) override;

    const Fvector& listener_position() override { return Listener.position; }
};
extern CSoundRender_CoreA* SoundRenderA;
