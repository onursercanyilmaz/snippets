import React, {useEffect, useState} from 'react';
import {Provider} from 'react-redux';
import store from './store';
interface AuthProviderProps {
  children: React.ReactNode;
}

const AuthProvider = (props: AuthProviderProps) => {
  return <Provider store={store}>{props.children}</Provider>;
};

export default AuthProvider;
