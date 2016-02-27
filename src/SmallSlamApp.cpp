#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

// SLAM
#include "CoreSLAMHelper.hpp"

using namespace ci;
using namespace ci::app;
using namespace std;

class SmallSlamApp : public App {
public:
    void setup() override;
    void mouseDown( MouseEvent event ) override;
    void update() override;
    void draw() override;
    
private:
    CoreSLAM mCoreSLAM;
    
};

void SmallSlamApp::setup()
{
    mCoreSLAM.setup();
}

void SmallSlamApp::mouseDown( MouseEvent event )
{
}

void SmallSlamApp::update()
{
}

void SmallSlamApp::draw()
{
    gl::clear( Color( 0, 0, 0 ) );
}

CINDER_APP( SmallSlamApp, RendererGl )
