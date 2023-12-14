import {createSlice} from '@reduxjs/toolkit';

const initialState = {
  isAuthenticated: false,
  user: null,
};

const authSlice = createSlice({
  name: 'auth',
  initialState,
  reducers: {
    login: (state, action) => {
      state.isAuthenticated = true;
      console.log('hi');
      state.user = action.payload;
    },
    logout: (state) => {
      console.log('bye');
      state.isAuthenticated = false;
      state.user = null;
    },
  },
});

export const {login, logout} = authSlice.actions;
export const authState = (state: any) => state.auth;
export default authSlice.reducer;
