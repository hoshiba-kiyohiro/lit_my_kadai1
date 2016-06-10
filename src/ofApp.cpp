#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255,255,255);
    
    
    




}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(192, 192, 192);
    
    for (int i = 1; i <= 29; i++) {
        ofLine(1024/30*i, 0, 1024/30*i, 768);
    }
    
    for (int i = 1; i <= 19; i++) {
        ofLine(0, 768/20*i, 1024, 768/20*i);
    }
    
    ofPushStyle();
    
    ofSetColor(192, 192, 192);
    ofSetLineWidth(2);
    

    ofLine(0, move_y, 1024, move_y);
    ofLine(move_x, 0, move_x, 768);
    ofLine(ofGetWidth()/2, ofGetHeight()/2, move_x, move_y);
    
    float r = abs(ofDist(ofGetWidth()/2, ofGetHeight()/2, move_x, move_y));
    
    float triX = move_x- ofGetWidth()/2;
    float triY = ofGetHeight()/2 - move_y;
    float triTheta = atan2(triY,triX);
    float angle = 180 * (triTheta / PI);
    
    if(angle<0) angle = angle + 360;
    cout << angle << endl;
    
    ofSetColor(ofColor::fromHsb(ofMap(angle,0,360,0,255), 255, 255));
    
    
    ofNoFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, r+ofRandom(10));
    
    ofFill();
    ofCircle(ofGetWidth()/2, ofGetHeight()/2, r/3+ofRandom(10));
    

    
    

    

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
    
    move_x = x;
    move_y = y;
    
    

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
