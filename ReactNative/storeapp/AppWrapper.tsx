import React from 'react';
import App from './App';
import AuthProvider from './src/context/AuthProvider/AuthProvider';
export default function AppWrapper() {
  return (
    <AuthProvider>
      <App />
    </AuthProvider>
  );
}
