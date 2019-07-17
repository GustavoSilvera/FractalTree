#include "ofApp.h"




void ofApp::branch(float length = 100) {
  glPushMatrix();
  ofDrawLine(0, 0, 0, -length);
  ofTranslate(0, -length);
  if (length > 1) {
    glPushMatrix();
    ofRotate(angle);
    branch(length * (float)branch_scalar);
    glPopMatrix();
    glPushMatrix();
    ofRotate(-angle);
    branch(length * (float)branch_scalar);
    glPopMatrix();
  }
  glPopMatrix();
}



//--------------------------------------------------------------
void ofApp::setup(){
    angle = 45;
    branch_scalar = 0.67;
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofColor myColor;
    myColor.set ( 0, 0, 0 );
    ofClear ( myColor );
    glPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/1.2);
    ofScale(2, 2, 0);
    branch();
    glPopMatrix();

    /*
    ofNoFill();
    ofDrawBox(64, 256, 0, 64, 64, 64);
    ofDrawCylinder(256, 256, 32, 128);
    ofDrawCone(160, 256, 0, 32, 128);
    ofDrawIcoSphere(352, 256, 0, 32);
    ofDrawPlane(448, 256, 64, 64);
    ofDrawSphere(544, 256, 32);
    ofDrawRectangle(64, 64, 64, 64);
    ofDrawCircle(192, 96, 32);*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 27){
        OF_EXIT_APP(0);
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    angle = ofGetWidth()/2 - x/2;
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
