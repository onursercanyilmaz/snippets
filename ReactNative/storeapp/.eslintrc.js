module.exports = {
  root: true,
  plugins: ["@typescript-eslint"],
  parser: "@typescript-eslint/parser",
  extends: [
    "@react-native",
    "eslint:recommended",
    "plugin:@typescript-eslint/eslint-recommended",
    "plugin:@typescript-eslint/recommended",
  ],
  rules: {
    "@typescript-eslint/no-unused-vars": ["warn", { args: "none" }],
    quotes: "off",
  },
};
