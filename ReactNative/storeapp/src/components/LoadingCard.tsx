import React from 'react';
import LottieView from 'lottie-react-native';

const LoadingCard = () => {
  return (
    <LottieView
      style={{ width: '100%', height: '100%' }}
      source={require('../assets/loading.json')}
      autoPlay
      loop
    />
  );
};

export default LoadingCard;
