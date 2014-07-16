#include "ofApp.h"

#define WINDOW_WIDTH 1024
#define WINDOW_HEIGHT 768

#define FPS 60

#define BASE_DEBUG if(baseDebug)

static const bool baseDebug = false;

//--------------------------------------------------------------
void ofApp::setup(){
  // Window shape
  ofSetWindowShape(WINDOW_WIDTH, WINDOW_HEIGHT);
  // Frame rate(aim default 60fps)
  ofSetFrameRate(FPS);
  // Background color
  ofBackground(255, 255, 255);

  // First Pitch
  pitch = 2;
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
  int i;

  // ç¿ïWånÇíÜêSç¿ïWÇ…à⁄Ç∑
  ofTranslate( WINDOW_WIDTH / 2, WINDOW_HEIGHT / 2 );
  // yé≤ÇîΩì]
  ofScale( 1, -1 );

  //##################################################
  // Line Color
  ofSetColor( 0, 0, 0 );

  BASE_DEBUG {
    // Base y
    ofLine( 0, WINDOW_WIDTH, 0, -WINDOW_WIDTH );
  }

  // Draw all line
  for( i = 0; i < WINDOW_HEIGHT / 2; i+=pitch )
  {
    // Positive region
    ofLine( -WINDOW_WIDTH / 2, i, WINDOW_WIDTH / 2, i );
    // Negative region
    ofLine( -WINDOW_WIDTH / 2, -i, WINDOW_WIDTH / 2, -i );
  }
  //##################################################
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
  switch(key) {
  case OF_KEY_UP:
    pitch++;
    break;

  case OF_KEY_DOWN:
    pitch--;
    break;

  case 'o':
    pitch+=10;
    break;

  case 'l':
    pitch-=10;
    break;

  case 'f':
    ofToggleFullscreen();
    break;

  default:
    break;
  }
  if( pitch > WINDOW_HEIGHT / 2 ) pitch = WINDOW_HEIGHT / 2;
  else if( pitch < 2 ) pitch = 2;

  printf("Pitch : %d[pixel]\n", pitch);
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}